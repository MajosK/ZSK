#include <iostream>

using namespace std;

int main()
{
        int i,j,wiersze,ilosc;
        string sym;
        cout<<"Podaj ilosc wierszy: ";
        cin>>wiersze;
        cout<<"Jaki znak byœ chcia³? ";
        cin>>sym;
        cout<<"Ile symboli? ";
        cin>>ilosc;
        cout<<endl;
        for(i=1; i<=wiersze; i++){
               for(j=1;j<=ilosc;j++){
                cout<<sym<<" ";
               }
                cout<<endl;
            }
    return 0;
}
