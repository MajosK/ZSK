#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int x,y,z;
    cout << "Podaj 3 liczby" <<endl;
    cin>>x>>y>>z;
    if (x%2==1 || y%2==1 || z%2==1){
        cout <<"TAK"<<endl;
    }else{
        cout <<"NIE"<<endl;}
        system("pause");
    return 0;
}
