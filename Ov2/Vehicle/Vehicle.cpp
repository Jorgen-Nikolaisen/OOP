#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

class Vehicle{
private:
char vehicleType, fuelType;
string regNumber;
public:
    Vehicle(char vehicletype, char fueltype, string regnumber) : vehicleType(vehicletype),
    fuelType(fueltype), regNumber(regnumber) {
        setVehicleType(vehicletype);
        setRegistrationNumber(regnumber);
    }

    void setRegistrationNumber(string regnumber){
        for(char c : regnumber){
            if(c == '\146' || c == '\143' || c == '\153'){
                throw invalid_argument("You can not have ÆØÅ in regnr");
            }
        }
        for(char c : regnumber.substr(2,regnumber.size())){
            if(c < '0' || c > '9' ){
                throw invalid_argument("Numbers baby");
            }
        }
        if(vehicleType == 'M' && (regnumber.substr(0,2) == "EL" || regnumber.substr(0,2) == "EK")){
            throw invalid_argument("Motorcycla cannot be el");
        }
        if(vehicleType == 'M' && regnumber.size() != 6){
            throw invalid_argument("Wrong motor length");
        }
        if(regnumber.at(0) == fuelType){
            regNumber = regnumber;
            cout << "working" << endl;
        }
        else{
            throw invalid_argument("placeholder");
        }
    }


    void setVehicleType(char vehicletype){
        if(vehicletype == 'C' || vehicletype == 'M'){
            vehicleType = vehicletype;
        }
        else{
            throw invalid_argument("Car or motorollllla");
        }
    }

    char getFuelType(){
        return fuelType;
    }

    char getVehicleType(){
        return vehicleType;
    }

    string getRegNum(){
        return regNumber;
    }



};