#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <stdexcept>
#include <map>
using namespace std;


class Card{
protected:
    /*enum cardType  {
        S, H, D, C 
    };*/
    char cardType;
    int cardValue;
    string card = "";
public:
    Card(char cardType, int cardValue) : cardType(cardType), cardValue(cardValue){

    }

    bool cardIsValid(char cardType, int cardValue){
        if(cardType != 'S' || cardType != 'H' || cardType != 'D' || cardType != 'C' ){
            throw invalid_argument("Card type is invalid");
        }
        else if (cardValue < 1 || cardValue > 13) {
            throw invalid_argument("The card value is fucked");
        }
        else{
            return true;
        }
    }

    char getSuit(){
        return cardType;
    }

    int getFace(){
        return cardValue;
    }

    string getCard(){
        string s;
        s.push_back(cardType);
        card = s +  to_string(cardValue);
        return card;
    }

};


class CardDeck{
private:
    char cardV;
    int shuffle;
    vector<Card> cards;
    vector<char> cardFace;
    vector<Card> cardsholder;

public: 
    CardDeck(int n){
        cardFace.push_back('S');
        cardFace.push_back('H');
        cardFace.push_back('D');
        cardFace.push_back('C');
        for(int i = 0; i < 4; i++){
            for(int j = 1; j < (n+1); j++){
                Card card = Card(cardFace.at(i), j);
                cards.push_back(card);
            }            
        }
    }

    int getCardCount(){
        return cards.size();
    }

    string getCard(int n){
        if(cards.size() > n && n >= 0){
            return cards.at(n).getCard();
        }
        else throw invalid_argument("The index is out of bounds");
    }

    void shufflePerfectly(){
        shuffle = (cards.size() / 2);
        for(int i = 0; i < shuffle; i++){
            cardsholder.push_back(cards.at(i));
            cardsholder.push_back(cards.at(i+shuffle));
        }
        cards = cardsholder;      
    }


};