#include <iostream>

using namespace std;

int main()
{
    int x=1;
    string haslo,haslo1;
    haslo="zsk";
    cout << "Podaj haslo: " << endl;
    do{
        cin >> haslo1;
        cout << "Jest to twoja "<<x<<" proba"<<endl;

        if(haslo1==haslo){
            cout << "Gratulacje, odgadles haslo po "<<x<<" probie";
            break;
        }
        else if(x==3){
            cout << "NIE ODGADLES HASLA" <<endl;
            break;
        }else{
        x++;
        }
    }while (x<=3);
    return 0;
}
