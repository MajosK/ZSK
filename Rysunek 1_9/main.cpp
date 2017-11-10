#include <iostream>

using namespace std;

int main()
{
    double s,a;

    s=0;
    a=0;
    do{
        s=s+a;
        cout << "Podaj a: ";
        cin>> a;
    }
    while (a<=50);
    cout<<s;
    return 0;
}
