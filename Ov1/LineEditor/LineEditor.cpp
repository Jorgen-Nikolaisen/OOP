#include <iostream>
#include <string>

using namespace std;

class LineEditor{
private:
    string text = "";
    string temp = "";
    int insertionIndex;
public:

    LineEditor(string text) : text(text), insertionIndex(0) {}

    void setText(string text){
        this -> text = text;
    }

    string getText(){
        return this -> text;
    }

    void setInsertionIndex(int insertionIndex){
        this -> insertionIndex = insertionIndex;
    }

    int getInsertionIndex(){
        return this -> insertionIndex;
    }

    void insertString(string s){
        temp = text.substr(0,insertionIndex) + s + text.substr(insertionIndex, text.length());
        text = temp;
    }

    void left(){
        if(insertionIndex > 0){
            insertionIndex --;
        }
        else{
            insertionIndex = text.size();
        }
    }

    void right(){
        if(insertionIndex < text.size()){
            insertionIndex ++;
        }
        else{
            insertionIndex = 0;
        }
    }

    void deleteLeft(){
        if(insertionIndex > 0){
            temp = text.substr(0,(insertionIndex - 1)) + text.substr(insertionIndex, text.length());
        text = temp;
        }
        else{
            cout << "No elements to the left";
        }
    }

     void deleteRight(){
        if(insertionIndex < text.size()){
            temp = text.substr(0,(insertionIndex)) + text.substr((insertionIndex + 1), text.length());
        text = temp;
        }
        else{
            cout << "No elements to the right" << endl;
        }
    }


};
