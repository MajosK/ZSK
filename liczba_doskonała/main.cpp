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
    cout << "Liczba doskona�a" << endl;
    else
    cout << "Liczba niedoskona�a" << endl;

    return 0;
}
