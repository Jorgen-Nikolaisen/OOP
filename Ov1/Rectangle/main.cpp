#include <iostream>
#include "Rectangle.cpp"
using namespace std;

int main(){

    Rectangle test(1,1,3,3);
    cout << test.getHeight() << endl;
    cout << test.getWidth() << endl; 
    return 0; 
}



/*
Oppgaven handler om en Rectangle-klasse, som håndterer et firkantet område i et koordinatsystem, 
med sider parallelle med koordinataksene.
Tilstanden i Rectangle-objekter er ikke spesifisert eksplisitt, 
men må velges slik at metodene nedenfor kan implementerers. Merk at alle metodene jobber med heltallsstørrelser.
Rectangle-klassen har metoder for å spørre om tilstanden og endre tilstanden. 
Spørremetodene dekker høyde og bredde og koordinatene til øverste venstre og nederste høyre hjørne og om 
rektanglet inneholder spesifikke punkt(er).
Endringsmetodene dekker utviding ved å legge til punkter.
Logikken til metodene må tilfredsstille følgende krav:

Når en utvider et Rectangle-objekt med en av add-metodene, 
så skal ikke rektanglet bli større enn nødvendig, 
dvs. at dersom man må utvide rektangelet skal det bare utvides slik at det akkurat inneholder det nye punktet.
Et rektangel er tomt dersom enten bredden eller høyden er 0.

Konstruktører:
Rectangle(int x1, int y1, int x2, int y2) - Lager et minst mulig rektangel som inneholder både punktene (x1, y1) og (x2, y2)
Spørremetoder:
int getMinX() og int getMinY() - returnerer henholdsvis xxx- og yyy-koordinatene til punktet med lavest 
(x,y)(x,y)(x,y)-verdier som er inneholdt i dette rektanglet.

int getMaxX() og int getMaxY() - returnerer henholdsvis xxx- og yyy-koordinatene til punktet med høyest 
(x,y)(x,y)(x,y)-verdier som er inneholdt i dette rektanglet.

int getWidth() og int getHeight() - returnerer henholdsvis bredden og høyden til rektanglet. 
Begge skal returnere 000, dersom dette rektanglet er tomt.

boolean isEmpty() - returnerer true om rektanglet er tomt, dvs. om bredden og/eller høyden er 000.

boolean contains(int x, int y) - returnerer true om punktet (x,y)(x,y)(x,y) er inneholdt i dette rektanglet, og false ellers.

boolean contains(Rectangle rect) - returnerer true om hele rect, dvs. alle hjørnepunktene i rect, 
er inneholdt i dette rektanglet, og false ellers.

Endringsmetoder:


boolean add(int x, int y) - utvider (om nødvendig) dette rektanglet slik at det (akkurat)
 inneholder punktet (x,y)(x,y)(x,y). Returnerer true om dette rektanglet faktisk ble endret, ellers false.

boolean add(Rectangle rect) - utvider (om nødvendig) dette rektanglet slik at det (akkurat) 
inneholder hele rect-argumentet. Returnerer true om dette rektanglet faktisk ble endret, ellers false. 
Dersom rect er tomt, så skal dette rektanglet ikke endres.

Andre metoder:

Rectangle union(Rectangle rect) - returnerer et nytt Rectangle-objekt som tilsvarer kombisjonen 
av dette rektanglet og rect-argumentet. 
Alle punktene som finnes i ett av rektanglene skal altså være inneholdt i rektanglet som returneres.

*/