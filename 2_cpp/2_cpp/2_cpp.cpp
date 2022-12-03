// 2_cpp.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>

using namespace std;

int main(void)
{
	cout << "los geht's!" << endl;
	auto i = 16;
	while (i <= 63) {
		int r = i % 4;
		if (r == 0)
		{
			cout << endl;
			cout << hex << i << " " << dec << i << " " << oct << i << " ";
		}
		i = i + 1;
	}
	return 0; 
} // Dieses Programm gibt untereinander die Dezimalzahlen von 16 bis 60 in Viererschritten in Hexadecimal (links) und Octaldecimal (rechts) aus.


