#include <iostream>
using namespace std;
int main()
{

    int wechselgeld_in_cent;
    cout << "Geben Sie das Wechelgeld ein: ";
    cin >> wechselgeld_in_cent;
    cout << endl;


    int dollar = wechselgeld_in_cent / 100;
    int rest_cent = wechselgeld_in_cent % 100;


    int quarters = rest_cent / 25;
    rest_cent %= 25;


    int dimes = rest_cent / 10;
    rest_cent %= 10;


    int nickels = rest_cent / 5;
    rest_cent %= 5;


    int cents = rest_cent;


    cout << "Das Wechselgeld ist " << dollar << " Dollar, \n" << quarters << " Quarter, \n" << dimes << " Dime, \n" << nickels << " Nickel und \n" << cents << " Cent." << endl;

    return 0;
}