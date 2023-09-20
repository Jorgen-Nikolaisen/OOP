#include <iostream>
#include "Digit.cpp"
using namespace std;

int main(){

    Digit seksTall(6);
    Digit treTall(3);
    Digit femTall(5);
    
    return 0;
}


/*La hovedprogrammet opprette tre Digit-objekter, 
som fungerer som sifre i et tre-sifret tall. 
Lag en løkke som teller fra 0 til høyest mulig verdi som kan 
representeres i tallsystemet. 
Legg så til 1 så verdien av det tre-sifrede tallet igjen blir 0. 
Velg selv hvilket tallsystem du vil bruke.

Oppgaven handler om en Digit-klasse, som representerer ett siffer i et gitt 
tallsystem.
Tilstanden i Digit-objekter er todelt:

en int som angir tallsystemet, f.eks. 10 for titallssystemet, 
som oppgis i konstruktøren. Denne verdien vil ikke bli satt over 36.
en int-verdi, som representerer siffer-verdien i det angitt tallsystem og 
må være fra og med 0 til (men ikke med) tallsystem-verdien

Konstruktøren tar inn en int, som initialiserer tallsystem-verdien,
mens siffer-verdien settes til 0.
Digit-tilstanden leses og oppdateres med følgende metoder:


int getValue() - returnerer siffer-verdien

boolean increment() - øker siffer-verdien med én. Dersom den da når 
tallsystem-verdien, så (re)settes den til 0 og metoden returnerer true, 
ellers returnerer den false.

int getBase() - returnerer tallsystemet.



*/