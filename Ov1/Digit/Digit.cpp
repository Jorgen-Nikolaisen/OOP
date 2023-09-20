#include <iostream>

using namespace std;

class Digit{
private:
    int tallVerdi;
    int sifferVerdi;
public:

    Digit(int tallsystem) : tallVerdi(tallsystem), sifferVerdi(0){}

    int getValue(){
        return sifferVerdi;
    }

    bool increment(){
        sifferVerdi++;
        if(sifferVerdi == tallVerdi){
            sifferVerdi = 0;
            return true;
        }
        else{
            return false;
        }
    }

    int getBase(){
        return tallVerdi;
    }

};