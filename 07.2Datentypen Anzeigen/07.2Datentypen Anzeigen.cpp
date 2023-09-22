#include <iostream>
#include <limits.h>
#include <float.h>
#include <iomanip>
using namespace std;

int main()
{
    cout << left << setw(16) << setfill(' ') << "Datentyp" << setw(8) << setfill(' ') << "Bits"
        << setw(16) << setfill(' ') << "Max-Wert" << setw(12) << setfill(' ') << "Min-Wert" << endl;

    cout << setw(52) << setfill('-') << "" << endl;

    cout << left << setw(16) << setfill(' ') << "INT" << setw(8) << setfill(' ') << sizeof(int) * 8
        << setw(16) << setfill(' ') << INT_MAX << setw(12) << setfill(' ') << INT_MIN << endl;

    cout << left << setw(16) << setfill(' ') << "SHORT" << setw(8) << setfill(' ') << sizeof(short) * 8
        << setw(16) << setfill(' ') << SHRT_MAX << setw(12) << setfill(' ') << SHRT_MIN << endl;

    cout << left << setw(16) << setfill(' ') << "LONG" << setw(8) << setfill(' ') << sizeof(long) * 8
        << setw(16) << setfill(' ') << LONG_MAX << setw(12) << setfill(' ') << LONG_MIN << endl;

    cout << left << setw(16) << setfill(' ') << "char" << setw(8) << setfill(' ') << sizeof(char) * 8
        << setw(16) << setfill(' ') << CHAR_MAX << setw(12) << setfill(' ') << CHAR_MIN << endl;

    cout << left << setw(16) << setfill(' ') << "BOOL" << setw(8) << setfill(' ') << "8"
        << setw(16) << setfill(' ') << "1" << setw(12) << setfill(' ') << "0" << endl;

    cout << left << setw(16) << setfill(' ') << "FLOAT" << setw(8) << setfill(' ') << sizeof(float) * 8
        << setw(16) << setfill(' ') << FLT_MAX << setw(12) << setfill(' ') << FLT_MIN << endl;

    cout << left << setw(16) << setfill(' ') << "DOUBLE" << setw(8) << setfill(' ') << sizeof(double) * 8
        << setw(16) << setfill(' ') << DBL_MAX << setw(12) << setfill(' ') << DBL_MIN << endl;

    cout << setw(52) << setfill('-') << "" << endl;


}
