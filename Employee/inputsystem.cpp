#include <iostream>
#include <vector>
using namespace std;

class Quiz{
private: 
string answer;
int size;
vector<string> theQuestionArray;
vector<string> theAnswerArray;
public: 
    Quiz(int questionAmount){
        this -> size = questionAmount;
        fillQuestions();
    }

    

    void fillQuestions(){
        for(int i = 0; i < size; i++){
            cout << "Enter Question " << i + 1 <<": ";
            string question;
            cin >> question;
           // theQuestionArray.insert(question,i);
            cout << "Enter the answer: ";
            cin >> theAnswerArray[i]; 
        }
    }

    void playQuiz(){
        for(int i = 0; i < size; i++){
            cout << "Question " << i + 1 << ": " << theQuestionArray[i] << endl;
            cout << "Enter your answer: ";
            cin >> answer;
            if(answer == theAnswerArray[i]){
                cout << "Noice" << endl;
            }
            else{
                cout << "Fail" << endl;
            }   
        }
    }


};


/*
setQuestion()
setAnswer()
setMultipleChoice()
setMultipleChoiceAnswer();


*/