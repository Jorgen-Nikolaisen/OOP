#include <cstdlib>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
using namespace std;

class Nim{
private:
vector<int> piles;
string gameState = "";
public: 
    Nim() : piles(){
        for(int i = 0; i < 3; i++){
            piles.push_back(10);
        }
    }

    Nim(int pile1, int pile2, int pile3) : piles(){
        if(pile1 > 0 && pile2 > 0 && pile3 > 0){
            piles.push_back(pile1);
            piles.push_back(pile2);
            piles.push_back(pile3);
        }
    }

    void removePieces(int number, int targetPile){
        if(isValidMove(number, targetPile)){
            piles.at(targetPile) -= number; 
        }
        else throw invalid_argument("Get your shit together");
        if(isGameOver()){
            cout << "Game over" << endl;
            exit(0); 
        }
        cout << toString() << endl;
    }

    bool isValidMove(int number, int targetPile){
        if((targetPile > 0 && targetPile < 3) && (number < piles.at(targetPile) && number > 0)){
            return true; 
        }
        else return false;  
    }


    bool isGameOver(){
        for(int i = 0; i < 3; i++){
            if(piles.at(i) < 1){
                return true;
            }
        }
        return false;
    }

    int getPile(int targePile){
        return piles.at(targePile);
    }

    string toString(){
        gameState = "Pile 1: " + to_string(piles.at(0)) + " Pile 2: " + to_string(piles.at(1)) +  " Pile 3: " + to_string(piles.at(2));  
        return gameState;
    }


};