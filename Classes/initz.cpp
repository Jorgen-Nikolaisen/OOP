#include <iostream>


using namespace std;

class Distance{
private:
    int feet;
    float inches;
public: 
    Distance() : feet(0), inches(0.0){

    }

    void setDistance(int feet, float inches){
        this -> feet = feet;
        this -> inches = inches;
    }

    void getDistance(){
        cout << feet << " feet and " << inches << " inches" << endl;
    }

};

enum Suit{
    Clubs, Diamond, Heart, Spades
};
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;




class Cards{
protected: 
int number;  //2 - 10 and jack - ace
Suit suit;  // enum Suit
string holder = "";
public: 
    Cards(int number, Suit s) : number(number), suit(s){

    }

    void display(){
        switch (suit)
        {
        case 0: holder = "Clubs";
            break;
        
        default:
            break;
        }
        cout << "You have the " << number << " of " << holder << endl; 
    };
    bool isEqual(Cards other){
        return(number == other.number && suit == other.suit) ? true : false;
    };


};


int main(){

    Cards myHand(jack, Clubs);
    myHand.display();

    return 0;
}