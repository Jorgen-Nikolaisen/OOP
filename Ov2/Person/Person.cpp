#include <iostream>
#include <stdexcept>
using namespace std; 

class Person{
private:
string firstName, lastName, fullName, emailPerson;
int position = 0;
char Gender;
public: 
    Person(string fullName, string email, char gender) : fullName(fullName), emailPerson(email), Gender(gender) {
        position = fullName.find_first_of(" ");
        firstName = fullName.substr(0, position);
        lastName = fullName.substr(position + 1, fullName.size());
        if(firstName.size() < 2 || lastName.size() < 2){
            throw invalid_argument("First and lastname must be atleast to character each");
        }
        setGender(gender);
        setEmail(email);
    }

    void setEmail(string email){
        position = email.find_first_of(".");
        if(email.substr(0,position) == firstName 
        && email.substr(position + 1, lastName.size()) == lastName
        && email.substr((position + lastName.size())+1, email.size()) == "@domain.com"
        ){
            emailPerson = email;
        }
        else{
            throw invalid_argument("The email must be first.last@domain.LA");
        }
    }   

    void setGender(char MF){
        if(MF == 'M'){
            Gender = 'M';
        }
        else if (MF == 'F') {
            Gender = 'F';
        }
        else if(MF == '\0'){
            Gender = '\0';
        }
        else{
            throw invalid_argument("You must enter either M, F or 0");
        }
    }


    string getEmail(){
        return emailPerson;
    }

    char getGender(){
        return Gender;
    }
};


/*


*/