#include <iostream>
#include "Location.cpp"
using namespace std;

int main(){

    Location P;
    P.left();

    return 0;
}

/*
    Oppgaven handler om en Location-klasse, som holder rede på (x,y)-posisjonen til en 
    figur som beveger seg i et rutenett.
Location-klassen har følgende metoder:

up() - beveger figuren en rute opp

down() - beveger figuren en rute ned

left() - beveger figuren en rute til venstre

right() - beveger figuren en rute til høyre

getX() - returnerer x-posisjonen til figuren

getY() - returnerer y-posisjonen til figuren

Merk at konvensjonen innen datagrafikk og rutenettbaserte spill er at xxx øker mot høyre (som i matte) og yyy nedover (altså motsatt av i matte).
*/