#include <iostream>

using namespace std;

int main()
{
    int i,j;
    cout << "Podaj poczatek: ";
    cin>>i;
    cout << "Podaj koniec: ";
    cin>>j;
    cout<<endl;

    if(i<j) {
    for (i;i<=j;i++){
            if(i%2==0){
                cout<<i<<" - liczba parzysta **WIR LAGEN"<<endl;
            }else if (i%2==1){
                cout<<i<<" - liczba nieparzysta VOR MADAGASKAR**"<<endl;
            }
    }
    }else{
        cout<<"Nie chadzia :("<<endl;
    }
    return 0;
}
