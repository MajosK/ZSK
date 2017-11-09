#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int p,q,i,x,y,n;

    cout << "Poczatek zakresu: ";
    cin >> p;
    cout << "Koniec zakresu: ";
    cin >> q;
    cout << "Liczba liczb do wylosowania: ";
    cin >> i;

    srand(time(NULL));
    y=1;
    for(x=0;x<i;x++)
    {
        n=p+rand()%(q-p+1);
        cout << "Liczba " << y <<": " << n <<endl;
        y++;
    }

    return 0;
}
