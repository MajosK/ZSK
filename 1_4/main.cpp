#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    //podr. IEr1 z dysku google - str. 19; zad 1.3
    double a,b, pole, obwod;
    cout<<"podaj liczbe a i b: "<<endl;
    cin>>a>>b;
    pole=a*b;
    obwod=(a*2)+(b*2);
    cout<<"Pole= "<<pole<<endl;
    cout<<"Obwod= "<<obwod;
    return 0;
}
