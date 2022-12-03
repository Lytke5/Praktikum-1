// 5_cpp.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>

using namespace std;

int main()
{
    int oldNumber = -1;
    int number, temp, biggest, smallest;
    int biggestA[4];
    int smallestA[4];
    cout << "Vierstellige Zahl = ";
    cin >> number;
    cout << endl;

    while (oldNumber != number) {

       oldNumber = number;

       smallestA[0] = number / 1000;
       smallestA[1] = (number - smallestA[0]*1000)  / 100;
       smallestA[2] = (number - (smallestA[0] * 1000 + smallestA[1] * 100)) / 10;
       smallestA[3] = number - (smallestA[0] * 1000 + smallestA[1] * 100 + smallestA[2] * 10);

       for (int i = 0; i < 4; i++) {
           for (int j = i + 1; j < 4; j++)
           {
               if (smallestA[j] < smallestA[i]) {
                   temp = smallestA[i];
                   smallestA[i] = smallestA[j];
                   smallestA[j] = temp;
               }
           }
       }
       
      
       for (int i = 0; i < 4; i++)
       {
           biggestA[i] = smallestA[i];
       }

       temp = biggestA[0];
       biggestA[0] = biggestA[3];
       biggestA[3] = temp;
       temp = biggestA[1];
       biggestA[1] = biggestA[2];
       biggestA[2] = temp;
           

       biggest = biggestA[0] * 1000 + biggestA[1] * 100 + biggestA[2] * 10 + biggestA[3];
       smallest = smallestA[0] * 1000 + smallestA[1] * 100 + smallestA[2] * 10 + smallestA[3];
       number = biggest - smallest;

       cout << biggest << " - " << smallest << " = " << number << endl;
    
   }
}