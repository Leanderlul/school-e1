#include <iostream>
using namespace std;

int main()
{
    double april;
    double juni;
    double mai;
    double durchschnitt;


    cout << "Niederschlag im April:";
    cin >> april;
    cout << endl;

    cout << "Niederschlag im Mai:";
    cin >> mai;
    cout << endl;

    cout << "Niederschlag im Juni:";
    cin >> juni;
    cout << endl;

    durchschnitt = (april + mai + juni) / 3;

    cout << "Durchschnitt:\n" << durchschnitt;





}