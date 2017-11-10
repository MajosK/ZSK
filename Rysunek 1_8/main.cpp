#include <iostream>

using namespace std;

int main()
{
    double n,s,i;
    cout << "Wypisz n: ";
    cin>>n;

    s=1;
    i=3;

    while (i<=n+2){
        s=s*i;
        i=i+1;
    }
    cout << s <<endl;
    return 0;
}
