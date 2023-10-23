#include <iostream>
#include <stdexcept>
#include <vector>
#include <algorithm>
#include <cmath>
#include <exception>
using namespace std;


class RPNcalc{
private:
    vector<double> RPNobj;
    int len = RPNobj.size() - 1;
    double tempValue = 0;
public:
    RPNcalc(){

    }  

    void push(double arg){
        RPNobj.push_back(arg);
        len = RPNobj.size() - 1;
    }

    double pop(){
        if(RPNobj.size() == 0){
            return NAN;
        }
        else return RPNobj.at(len);
    }   


    double peek(int n){
        if((len - n) > 0){
            return RPNobj.at(len - n);
        }
        else{
            throw invalid_argument("Out of bounds");
        }
    }
    
    
    int getSize(){
        return RPNobj.size();
    }

    void performOperation(char operand ){
        switch (operand) {
        case '+': (tempValue = RPNobj.at(len-1) + RPNobj.at(len));
        case '-': tempValue = RPNobj.at(len-1) - RPNobj.at(len);
        case '*': tempValue = RPNobj.at(len-1) * RPNobj.at(len);
        case '/': tempValue = RPNobj.at(len-1) / RPNobj.at(len);
        default: throw invalid_argument("Not a legal operator");
        }
        RPNobj.pop_back();
        RPNobj.pop_back();
        RPNobj.push_back(tempValue);
    }


};
