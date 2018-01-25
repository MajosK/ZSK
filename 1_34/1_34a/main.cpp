#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Zadanie 1.34 a"<<endl;
    cout << "Podaj x:" << endl;
    cin >> x;
    for (int n=4;n<x;n=n+3){
        cout << n <<",";
    }
    cout <<x;
    return 0;
}
