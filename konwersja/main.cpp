#include <iostream>
#include <iomanip>

using namespace std;

/* dec, hex, oct */
int main()
{
    int k = 100;
    double x = 100.123456789;

    cout << "k = " << k << endl;
    cout << "Konwersja systemow liczbowych: "<<endl;
    cout << "\n (16) = " <<hex <<k;
    cout << "\n (10) = " <<dec <<k;
    cout << "\n (8) = " <<oct <<k<<endl;\
    cout << "\n Liczba k zapisana na 8 znakach: ";
    cout <<"\n 8 znakow: "<< setfill('0')<<setw(8)<<k<<endl;
    cout <<setprecision(5)<<x;
    return 0;
}
