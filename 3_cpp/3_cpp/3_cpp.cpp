// 3_cpp.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>

using namespace std;

int main()
{
    int laenge, b, h, s;
    bool fehler, passt;
    do {
        fehler = true;
        cout << "Laenge in mm = ";
        cin >> laenge;
        if (laenge > 0)
            fehler = false;

    } while (fehler);

    do{
        fehler = true;
        cout << "Breite in mm = ";
        cin >> b;
        if (b > 0)
            fehler = false;

    } while (fehler);

    do {
        fehler = true;
        cout << "Hoehe in mm = ";
        cin >> h;
        if (h > 0)
           fehler = false;

    } while (fehler);

    do{
        fehler = true;
        cout << "Schuhgroesse des Kartons = ";
        cin >> s;
        if (s >= 32 && s <= 49)
           fehler = false;

    } while (fehler);


    cout << endl << "Oberflaeche = " << 2 * laenge * b + 2 * laenge* h + 2* b * h << " mm^2";
    cout << endl << "Volumen = " << laenge * b * h << " mm^3";

    float maxl = 200 + (s - 31) * 6.67;
    if (maxl - laenge >= 0)
        cout << endl << "Der Schuh passt!";
    else
        cout << endl << "Der Schuh passt nicht!";
}

