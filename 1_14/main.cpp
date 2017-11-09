#include <iostream>

using namespace std;

int main()
{
    double a,b,c,d;
    cout << "Podaj 4 liczby" <<endl;
    cin >>a>>b>>c>>d;
    if (a<5 && b<5 && c<5 && d<5){
        cout << "TAK"<<endl;
    }else{
        cout <<"NIE"<<endl;
    }
    return 0;

}
