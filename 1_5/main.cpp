#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;

int main()
{
    double a,b,w;
    a=4.25;
    b=3;
    w=(a*pow(b,3))/2*sqrt(a);
    cout<<"W wynosi: "<<w<<endl;
    return 0;
}
