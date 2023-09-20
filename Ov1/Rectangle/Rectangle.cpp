#include <iostream>

using namespace std; 

class Rectangle{
private:
int x1, x2, y1, y2;
int height, width;
public:
    Rectangle(int x1, int y1, int x2, int y2) : x1(x1), x2(x2), y1(y1), y2(y2), height(abs(y2-y1)), width(abs(x2-x1)) {
       
    }

    int getHeight(){
        return height;
    }

    int getWidth(){
        return width;
    }

    int getMinX(){
        if(x1 < x2) return x1;
        else return x2;
    }
    int getMaxX(){
        if(x1 > x2) return x1;
        else return x2;
    }

    int getMinY(){
        if(y1 < y2) return y1;
        else return y2;
    }
    int getMaxY(){
        if(y1 > y2) return y1;
        else return y2;
    }

    bool isEmpty(){
        if(width == 0 || height == 0) return true;
        else return false;
    }

    bool contains(int x, int y){
        if((x == x1 || x == x2) && (y == y1 || y == y2)) return true;
        else return false;
    }

    bool containsRect(Rectangle rect){
        return true; // Ikke ferdig
    }

    bool add(Rectangle rect){
        
    }


};


/*
hvis x er over punktet 
x 1 - 5
y 1 - 5 
x 1 - 6
y 1 - 5
*/