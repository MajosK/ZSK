#include <iostream>
/*
silnia
5! = 1*2*3*4*5
0! = 1
*/
using namespace std;

int main()
{
    int n,s,i;
    cout << "Podaj n: " << endl;
    cin >> n;
    s=1;
    for(i=2;i<=n;i++){
        s=s*i;
    }
    cout << "Silnia z: " << n << " wynosi: "<< s <<endl;
    return 0;
}
