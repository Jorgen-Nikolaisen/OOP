#include <iostream>
#include "inputsystem.cpp"
using namespace std;

class Employee{
protected:
string Name, Company;
int Age;
float Salary;


public:
    Employee (string name, int age, string company){
        Name = name;
        Age = age;
        Company = company;
        Salary = 0;
    }

    void setSalary(float salary){
        Salary = salary;
    }

    float getSalaray(){
        return Salary;
    }

    int getAge(){
        return Age;
    }
};  


class Developer: public Employee{
private:
string Codelanguage;
public:
    Developer(string name, int age, string company, string codelanguage) : Employee(name, age, company){
        Codelanguage = codelanguage;
    }

    void code(){
        cout << Name << " is coding in " << Codelanguage << endl;
    }

};



int main(){

   

    Quiz quizzer = Quiz(2);
   quizzer.playQuiz();
}