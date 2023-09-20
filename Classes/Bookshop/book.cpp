#include <iostream>

using namespace std;


class Publication{
protected:
    string title;
    float price;
    static float profit;
public: 
    Publication(string title, float price) : title(title), price(price){
        
    }

    void recordSale(){
        profit += price;
    }

    float getProfit(){
        return profit;
    }

};

float Publication::profit = 0;

class Book : public Publication{
protected:
    int pageCount;
public:
    Book(string title, float price,int pageCount) : Publication(title, price), pageCount(pageCount){

    }

    void displayData(){
        cout << title << " is a book with " << pageCount << " pages " << " it costs " << price << "$" << endl;
    }  

};

class AudioTape : public Publication{
protected:
    float playingtime;
public:
    AudioTape(string title, float price, float playingtime) : Publication(title, price), playingtime(playingtime){

    }

};


class Sales{

};

//463