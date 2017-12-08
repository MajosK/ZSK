#include <iostream>

using namespace std;

int main()
{
    int n,i=1,d=0;
    cout << "Podaj liczbe naturalna" << endl;
    cin >> n;
    do{
        if (n%i==0){
            d++}
            i++;
        }while(i<=n);
        cout <<"Liczba pierwsza";

    }
    return 0;
}
