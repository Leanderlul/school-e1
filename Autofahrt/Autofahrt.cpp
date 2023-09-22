
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int km;
	float liter;
	float euro;
	float gesamt;
	cout << "Eingabe der gefahrenen Kilometer: ";
	cin >> km;
	cout << endl;

	cout << "Eingabe der Menge des verbrauchten Benzin: ";
	cin >> liter;
	cout << endl;

	cout << "Eingabe des Preises pro Liter Benzin: ";
	cin >> euro;
	cout << endl;

	gesamt = liter / km * 100 * euro;
    
	cout << setprecision(4) << "Sie haben auf " << km << " km " << liter 
		<< " l Benzin verbraucht. Dies kostet Sie bei einem Preis von " << euro << " Euro pro Liter auf 100 km " << gesamt << " Euro.";



}

