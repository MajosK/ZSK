#include <iostream>

using namespace std;

int main()
{
    int n,dzielnik=0;
    cout << "Podaj n: " << endl;
    cin >> n;
    for (int i=1;i<=n/2;i++){
        if((n%i)==0)
        dzielnik +=i;

    }
        if(dzielnik==n)
    cout << "Liczba doskonała" << endl;
    else
    cout << "Liczba niedoskonała" << endl;

    return 0;
}
