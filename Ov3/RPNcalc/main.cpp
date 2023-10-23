#include <iostream>
#include "RPNcalc.cpp"
using namespace std;


int main(){
    
    RPNcalc tester;
    tester.push(10.5);
    tester.push(11);
    tester.push(12);
    cout << tester.getSize() << endl;
    cout << tester.peek(1) << endl;
    tester.performOperation('+');
    cout << tester.peek(1) << endl;

//    cout << tester.peek(1) << endl; 

    return 0; 
}

/*
Tilstanden i RPNCalc-objekter velger du selv, men det er naturlig å bruke en 
Stack eller ArrayList med Double-objekter.
RPNCalc-klassen skal ha følgende metoder:


void push(double) - legg argumentet på toppen av stacken.

double pop() - returner verdien på toppen av stacken. Verdien skal også fjernes fra stacken. 

Dersom stacken er tom, så skal Double.NaN returneres.

double peek(int) - returner verdien i stacken som står på plassen gitt i argumentet, telt fra toppen. 
Det vil si, peek(0) skal returnere verdien på toppen av stacken, peek(1) skal returnere verdien nest øverst i stacken osv. 
Verdien skal ikke fjernes av stacken. Dersom det er for få elementer på stacken, så skal Double.NaN returneres.

int getSize() - returner antallet elementer i stacken.

void performOperation(char) - utfør den angitte operasjonen på de to øverste verdiene i stacken. 
De to verdiene skal fjernes fra stacken og resultatet skal legges øverst. 
Bruk eksisterende metoder for å utføre dette der det er mulig. 
Metoden må støtte '+' (pluss), '-' (minus), '*' (multiplikasjon) og '/' (divisjon), 
men kan også støtte andre operatorer, f.eks. '~' (swap) for å bytte de to øverste operandene, 'p' eller 'π' (pi) for å legge pi på stacken (bruker ingen operander),
 '|' (absolutt-verdi, bruker én operand). Prøv å håndtere manglende operander på en måte som gir mening for operasjonen.


*/