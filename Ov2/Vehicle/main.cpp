#include <iostream> 
#include "Vehicle.cpp"
using namespace std; 


int main(){
    Vehicle tester('M', 'D', "DE2000" );
    string reg = "EK1244";
    for(char c : reg.substr(2, reg.size())){
        if(c < '0' || c > '9'){
            cout << c << endl;
        }
    }

    return 0; 
}



/*
Oppgaven handler om en Vehicle-klasse,
som håndterer informasjon om et kjøretøy og implementerer innkapslingsmetoder med validering.
Et Vehicle-objekt inneholder type kjøretøy, 
drivstoffet det bruker og registreringsnummer:

Typen kan være enten motorsykkel eller bil.
Drivstoffet kan være enten hydrogen, elektrisitet, diesel eller bensin. Kun biler kan gå på hydrogen.
Gyldige registreringsnummeret avhenger av typen kjøretøy og drivstoff etter følgende regler:

Kjøretøy som går på elektrisitet skal ha registreringsnummer som starter med bokstavene "EL" eller "EK"

Hydrogenbilene har registreringsnummer som begynner med bokstavene "HY"

Dieselkjøretøy og bensinkjøretøy har registreringsnummer som begynner på to bokstaver.
De kan ikke være "EK", "EL" eller "HY". Bokstavene Æ, Ø og Å skal ikke brukes.
For alle drivstoff gjelder det at det skal være brukt store bokstaver.
Ellers så gjelder det at motorsykler har 4 sifre etter bokstavene, mens biler har 5.



Følgende metoder må implementeres:

Vehicle(char, char, String) - Konstruktør der argument-rekkefølgen må være kjøretøystype, 
drivstofftype og registreringsnummer. 
Ved ugyldige argumenter utløses unntak av typen IllegalArgumentException.

getFuelType() - returnerer type drivstoff som følgende: 'H' for hydrogen, 'E' for elektrisitet, 'D' for diesel eller 'G' for bensin.

getRegistrationNumber() - returnerer registreringsnummeret

setRegistrationNumber(String) - endrer registreringsnummeret dersom det er gyldig i henhold til 
kravene over, og utløser unntak av typen IllegalArgumentException dersom det ikke er gyldig.

getVehicleType() - returnerer kjøretøystype: 'M' for motosykkel, 'C' for bil.





*/