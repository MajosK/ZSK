#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

void bin(int x)
{
  int i=0,tab[50];

  while(x){
    tab[i++]=x%2;
    x/=2;
  }
  for(int j=i-1;j>=0;j--){
  cout<<tab[j];
}
}

int main()
{
    int a,b,c,d;
    cout << "Podaj IP z wykorzystaniem entera zamiast kropki: "<<endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
     bin (a);
     cout << ".";
     bin (b);
     cout << ".";
     bin (c);
     cout << ".";
     bin (d);

    return 0;
}
