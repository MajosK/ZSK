#include <iostream>

using namespace std;

int ciag (int n){
    if (n==1)
        return 2;
    else
    return ciag (n-1)*2;
}

int main()
{
    int n;
    cout << "Zadanie 1.34 b"<<endl;
    cout << "Podaj n:" << endl;
    cin >> n;
    for (int i=2;i<n;i=i*2){
        cout << i <<",";
    }
    cout <<n<<endl;
    cout <<endl;
    cout << "Podaj pozycje w ciagu: ";
    cin >> n;
    cout <<n<<" wyraz ciagu wynosi: "<< ciag(n);
    return 0;
}
