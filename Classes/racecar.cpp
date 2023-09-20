#include <iostream>

using namespace std; 

class employee{
protected:
    string name;
    int serialNumber;
public:
    employee(string name, int serialNumber){
        this -> name = name;
        this -> serialNumber = serialNumber;
    }
};

class student{
protected:
    string school, degree;
public:
    student(string school, string degree){
        this -> school = school;
        this -> degree = degree;
    }
};


class manager : private employee, private student {  //The managment class
private:
    string title;
    double golfBill;
public:
    manager(string title, double golfBill, string name, int serialNumber, string school, string degree) : employee (name, serialNumber), student(school, degree){
        this -> title = title;
        this -> golfBill = golfBill;
    }

    void work(){
        cout << name << " is playing golf" << endl;
    }

    void getCredentials(){
        cout << "School: " << school << " degree: " << degree << endl; 
    }

};

class scientist : public employee {
private:
    int publications;
public:
    scientist(int publications, string name, int serialNumber) : employee (name, serialNumber){
        this -> publications = publications;
    }

    void work(){
        cout << name << " is researching" << endl; 
    }
};

class wageslave : public employee{
protected:
    double tax;
public:
    wageslave(double tax, string name, int serialNumber) : employee(name, serialNumber){
        this -> tax = tax;
    }

    void work(){
        cout << name <<" Is working for minimum wage" << endl;  
    }
};

class foreman : public wageslave{
private:
    int quota;
public:
    foreman(string name, int serialNumber, double tax, int qouta) : wageslave(tax, name, serialNumber){
        this -> quota = qouta;
    }

    void work(){
        cout << "Getting stressed over qouta, it is at: " << quota << endl;
    }

};

int main(){
    manager chief("El-jefe", 200, "Ken", 200, "Berkley", "Economics");
    wageslave roach(205, "louis", 666);
    chief.work();
    roach.work();
    chief.getCredentials();
    return 0;
}