#include <iostream>
#include <stdexcept>
using namespace std;

class Vehicle{
private:
char vehicleType, fuelType;
string regNumber;
public:
    Vehicle(char vehicletype, char fueltype, string regnumber) : vehicleType(vehicletype),
    fuelType(fueltype), regNumber(regnumber) {

    }

    void setRegistrationNumber(string regnumber){
        if((regnumber.at(0) + regnumber.at(1))  == fuelType){
            regNumber = regnumber;
        }
        else{
            throw invalid_argument("placeholder");
        }
    }

};