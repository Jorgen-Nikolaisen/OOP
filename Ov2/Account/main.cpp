#include <iostream> 
#include "Account.cpp"
using namespace std; 

int main(){
    Account rich(100, 2.5);
    rich.deposit(500);
    
    return 0;
}


/*
Oppgaven er en innkapslet og litt utvidet variant av Account-oppgaven under temaet 
Tilstand og oppførsel, og stiller bl.a. større krav til validering.
Et Account-objekt inneholder data om beløpet som står på kontoen og rentefoten (prosentpoeng).
Begge verdiene skal oppgis og settes når objektet opprettes og ingen av verdiene kan være negative.
Account-klassen har metoder for å sette inn og ta ut beløp, og legge til påløpte renter, 
i tillegg til en konstruktør for å initialisere en ny konto. 
Alle disse skal utløse unntak av typen IllegalArgumentException, 
dersom et argument ikke tilfredstiller kravene som angis.


Account(double, double) - Konstruktøren skal ta inn startbeløpet og rentefoten (prosentpoeng). 
Ingen av disse kan være negative.

double getBalance() - Returnerer beløpet som står på kontoen.

double getInterestRate() - Returnerer renten på kontoen.

void setInterestRate(double) - Denne metoden tar inn en ikke-negativ verdi og setter renten til denne verdien.

void deposit(double) - Denne metoden tar inn et ikke-negativt beløp og øker konto-beløpet tilsvarende.

void withdraw(double) - Denne metoden tar inn et ikke-negativt beløp og minsker konto-beløpet tilsvarende. 
Dersom det nye konto-beløpet er negativt, så skal tilstanden ikke endre, og det skal utløses et unntak av typen IllegalArgumentException.

void addInterest() - beregner renta og legger det til konto-beløpet.



*/