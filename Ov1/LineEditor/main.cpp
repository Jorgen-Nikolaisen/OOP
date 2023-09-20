#include <iostream>
#include "LineEditor.cpp"
using namespace std;

int main(){
    LineEditor txt("Hello");
    txt.setInsertionIndex(5);
    txt.insertString("o");
    cout << txt.getText() << endl;
    txt.setInsertionIndex(6);
    txt.deleteRight();
    cout << txt.getText() << endl;
    return 0;
}



/*
Oppgaven handler om en LineEditor-klasse, som håndterer data for redigering av en linje med tekst
 (altså tekst uten linjeskift).
LineEditor-klassen holder rede på en String-verdi og en tekstinnsettingsposisjon 
og har metoder for å redigere teksten. Tekstinnsettingsposisjonen er et heltall som angir 
hvor endringer skjer, 
tilsvarende en (blinkende) cursor som står mellom tegn. 
Verdien 000 tilsvarer foran første tegn, og høyeste mulige verdi er lengden på teksten, 
som tilsvarer at cursoren står bak siste tegn. Tilstanden er altså som følger:

text (en String-verdi) - teksten

insertionIndex - heltall som angir hvor i teksten redigeringer vil skje

Klassen har metoder med følgende oppførsel:

void left() - flytter tekstinnsettingsposisjonen ett tegn til venstre 
(tilsvarende bruk av venstre piltast)

void right() - flytter tekstinnsettingsposisjonen ett tegn til høyre 
(tilsvarende bruk av høyre piltast)

void insertString(String s) - skyter teksten angitt av argumentet s inn i teksten på tekstinnsettingsposisjonen 
og forskyver tekstinnsettingsposisjonen mot høyre tilsvarende

void deleteLeft() - fjerner tegnet til venstre for tekstinnsettingsposisjonen

void deleteRight() - fjerner tegnet til høyre for tekstinnsettingsposisjonen

String getText() - Returnerer teksten

void setText(String) - oppdaterer teksten til å være den nye teksten

int getInsertionIndex - returnerer hvor i teksten redigeringer nå skjer

void setInsertionIndex(int) - oppdaterer hvor i teksten redigeringer skal skje


*/