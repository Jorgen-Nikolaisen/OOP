#include <iostream>

using namespace std;

class Location{
private:
    int x, y;
public:
    Location() : x(0), y(0) {}

    void up(){
        if(y > 0){
            y--;
        }
        else{
            cout << "The object is at (" << x << "," << y << ") cant go further up" << endl;
        }
    }

    void left(){
        if(x > 0){
            x--;
        }
        else{
            cout << "The object is at (" << x << "," << y << ") cant go further left" << endl;
        }
    }

    void right(){
        if(x < 10){
            x++;
        }
        else{
            cout << "The object is at (" << x << "," << y << ") cant go further right" << endl;
        }
    }

    void down(){
        if(y <10){
            y++;
        }
        else{
            cout << "The object is at (" << x << "," << y << ") cant go further left" << endl;
        }
    }


};