#include <iostream>
#include "book.cpp"

using namespace std;

int main(){
    Book nr1("The great gatsby", 250.99, 450);

    nr1.displayData();
    return 0;
}