#include <iostream>
#include <ctime>

using namespace std;

int a;
int main()
{
    cout<<"Podaj a: ";
    cin>>a;
    while(a>0)
    {
        cout<<"Podaj a: ";
        cin>>a;
    }
    return 0;
}
