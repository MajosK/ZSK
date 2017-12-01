#include <iostream>

using namespace std;

int main()
{
    int y,a,z,x;
    cout << "Do jakiego zadania chcesz siê przeniesc?" << endl;
        cout << "\n Zadanie 1 - ciag liczb calkowitych";
        cout << "\n Zadanie 2 - ciag liczb nieparzystych";
        cout << "\n Zadanie 3";
        cout << "\n Zadanie 4" <<endl;
        cout << "Numer zadania: ";
        cin >> y;
    cout << endl;

    switch (y){
    case 1:
        cout <<" 8-wyrazowy ciag liczb calkowitych w postaci (";
        for(a=-3; a<=24; a=a+3){
            if(a!=3 && a!=18 && a!=24){
                cout << a << ",";
                }
            else if (a==24){
                cout << a <<")"<<endl;
            }
        }
        break;
    case 2:
        cout <<" Ciag liczb nieparzystych (";
        for(a=-3; a<=24; a=a+3){
            if (a%2!=0){
                if(a!=3 && a!=18 && a!=21){
                    cout << a << ",";
                }
                else if (a==21){
                    cout << a <<")"<<endl;
                }
            }
        }
        break;
    case 3:
        cout << ":v" <<endl;
        break;
    case 4:
        cout << "Podaj wartosc poczatkowa: ";
            cin >> z;
        cout << "Podaj wartosc koncowa: ";
            cin >> x;

        if(z<x){
            for (z;z<=x;z++){
                    if(z%2!=0){
                                cout << z<<",";
                    }
            }
        }else {
            cout << "Blednie podane wartosci";
        }

        break;
    default:

        cout << "Do jakiego zadania chcesz siê przeniesc?" << endl;
            cout << "\n Zadanie 1 - ciag liczb calkowitych";
            cout << "\n Zadanie 2 - ciag liczb nieparzystych";
            cout << "\n Zadanie 3";
            cout << "\n Zadanie 4"<< endl;
            cout << "Numer zadania: ";
            cin >> y;
        cout << endl;

        break;
}
    return 0;
}
