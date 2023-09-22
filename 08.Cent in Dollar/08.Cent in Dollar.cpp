#include <iostream>

using namespace std;


int main()
{
    int cent;

    cout << "Geben Sie die Cent ein:";
    cin >> cent;
    cout << endl;
   
    if (cent < 100)
    {
        cout << "Das ergibt 0 Dollar und \n" << cent << " Cent.";

    }
    else
    {
        int euro;
        int neu;
        int ergebnis;

        euro = cent / 100;

        neu = euro * 100;

        ergebnis = cent % neu;

        cout << "Das ergibt " << euro << " Dollar und " << ergebnis << " Cent.";

    }


}
