#include <iostream>
#include "Person.cpp"
using namespace std;

int main(){
    
    Person me("Jorgen Nikolaisen", "Jorgen.Nikolaisen@domain.com", 'G');
    //me.setEmail("Jorgen.Nikolaisen@domain.com");
    //me.setGender('M');
    cout << me.getEmail() << endl;
    cout << me.getGender() << endl;

    return 0; 
}

/*
Et Person-objekt inneholder navn (både fornavn og etternavn), e-post, fødselsdag og kjønn:

Navnet inneholder både fornavn og etternavn (og ingen mellomnavn), 
som begge må være på minst to bokstaver langt,
navnene må være skilt med ett mellomrom og kun inneholde bokstaver.
E-post-adressen (hvis den ikke er null) må være på formen fornavn.etternavn@domene.landskode, 
f.eks. hallvard.trætteberg@ntnu.no (en liste over landskoder finner du her).
Fødselsdagen skal være et dato-objekt (java.util.Date) og kan ikke være frem i tid.
En persons kjønn skal kunne returneres som 'M', 'F' eller '\0' (null-tegnet).

Person-klassen har tilgangsmetoder for å hente og sette tilstandene. 
Dersom et argument er ugyldig i seg selv, så skal unntaket IllegalArgumentException utløses.


setName(String) - oppdaterer navnet (fornavn og etternavn med mellomrom mellom), 
dersom det er gyldig i henhold til kravene over. Det er greit om navnet som settes, 
ikke stemmer med e-post-adressen.

setEmail(String) - oppdaterer e-post-adressen, etter å ha sjekket at den stemmer med navnet.

setBirthday(Date) - oppdaterer fødselsdatoen

setGender(char) - oppdaterer kjønnet

I tillegg til disse såkalte setter-metodene, så må Person-klassen ha tilsvarende getter-metoder.


*/