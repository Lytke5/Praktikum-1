// 1_cpp.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>

using namespace std;

int main()
{
    int number = 9; // number erhält den Wert 9
    cout << number << " = "; // number = 9 und ein = werden ausgegeben
    cout << number % 2; // Der Modulo von number wird ausgegeben
    number = number / 2; // number erhält den Wert number durch 2
    cout << number % 2; // Der Modulo von number wird ausgegeben
    number = number / 2; // number erhält den Wert number durch 2
    cout << number % 2; // Der Modulo von number wird ausgegeben
    number = number / 2; // number erhält den Wert number durch 2
    cout << number % 2; // Der Modulo von number wird ausgegeben
    number = number / 2; // number erhält den Wert number durch 2
    cout << endl; // nächste zeile
    return 0;
} //Dieses Programm übersetzt eine dezimalzahl in Binärcode und gibt das Ergebnis aus. (Maximal bis 15 möglich)

