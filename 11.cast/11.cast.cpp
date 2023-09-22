#include <iostream>
using namespace std;

int main()
{
    int zaehler;
    int nenner;

    cout << "Gebe einen Zaehler ein:";
    cin >> zaehler;
    cout << endl;

    cout << "Gebe einen Nenner ein:";
    cin >> nenner;
    cout << endl;

    cout << "Integer-Ergebnis " << zaehler / nenner << endl;

    cout << "Rest (Modulo)" << zaehler % nenner << endl;

    cout << "cast-Ergebnis " << static_cast<float> (zaehler) / (nenner);
}

