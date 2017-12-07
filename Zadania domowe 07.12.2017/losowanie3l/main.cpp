#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int x,y,z;

    srand(time(NULL));
    x=rand();
    y=rand();
    z=rand();

    cout << "Losowe liczby to: " <<x<<","<<y<<","<<z<< endl;

    if(x>y){
        if(x>z){
            cout << "Najwieksza liczba jest: "<<x<<endl;
        }else{
            cout << "Najwieksza liczba jest: "<<z<<endl;}
    }else{
        if(y>z){
        cout << "Najwieksza liczba jest: "<<y<<endl;
        }else{
        cout << "Najwieksza liczba jest: "<<z<<endl;
        }
        }

    return 0;
}
