#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void bin(int x)
{
  int i=0,tab[50];

  while(x)
  {
    tab[i++]=x%2;
    x/=2;
  }

  for(int j=i-1;j>=0;j--)
    cout<<tab[j];
}

void sev(int x)
{
  int i=0,tab[50];

  while(x)
  {
    tab[i++]=x%7;
    x/=7;
  }

  for(int j=i-1;j>=0;j--)
    cout<<tab[j];
}

int main()
{
    int x,y,a;

    cout << "Podaj liczbe: ";
    cin >> x;
    cout << x <<endl;
    cout << "Na jaki system chcesz przekonwertowac?";
    cout << "\n 1 - system binarny";
    cout << "\n 2 - system siodemkowy";
    cout << "\n 3 - system osemkowy";
    cout << "\n 4 - system dziesietny";
    cout << "\n 5 - system szesnastkowy" << endl;
    cin >> y;

if (y>0){

    switch( y )
    {
    case 1:
        cout << "system binarny" << endl;
            bin(x);
            cout << "\n (2) = " <<x;
        break;
    case 2:
        cout << "system siodemkowy" << endl;
            sev(x);
            cout << "\n (7) = " <<x;
        break;
    case 3:
        cout << "system osemkowy" << endl;
        cout << "\n (8) = " <<oct <<x;
        break;
    case 4:
        cout << "system dziesietny" << endl;
        cout << "\n (10) = " <<dec <<x;
        break;
    case 5:
        cout << "system szesnastkowy" << endl;
        cout << "\n (16) = " <<hex <<x;
        break;
    default:
        cout<< endl;
        break;
        }
    }else{
    cout << "Podana liczba powinna byc wieksza od 0" <<endl;
    }
    return 0;
}
