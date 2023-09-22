#include <iostream>
#include <limits.h>
#include <float.h>
#include <iomanip>
using namespace std;

int main() {
	cout << "Datentyp\tBits\tMax-Wert\tMin-Wert" << endl;

	cout << setw(52) << setfill('-') << "" << endl;

	cout << "INT\t\t" << sizeof(int) * 8 << "\t" << INT_MAX << "\t" << INT_MIN << endl;

	cout << "SHORT\t\t" << sizeof(short) * 8 << "\t" << SHRT_MAX << "\t\t" << SHRT_MIN << endl;

	cout << "LONG\t\t" << sizeof(long) * 8 << "\t" << LONG_MAX << "\t" << LONG_MIN << endl;

	cout << "CHAR\t\t" << sizeof(char) * 8 << "\t" << CHAR_MAX << "\t\t" << CHAR_MIN << endl;

	cout << "BOOL\t\t" << sizeof(bool) * 8 << "\t" << false << "\t\t" << true << endl;

	cout << "FLOAT\t\t" << sizeof(float) * 8 << "\t" << FLT_MAX << "\t" << FLT_MIN << endl;

	cout << "DOUBLE\t\t" << sizeof(double) * 8 << "\t" << DBL_MAX << "\t" << DBL_MIN << endl;

	cout << setw(52) << setfill('-') << "" << endl;


}