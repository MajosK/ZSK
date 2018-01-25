#include <iostream>

using namespace std;

double ciag (double n){
    if (n==1)
        return 1.5;
    else
    return ciag (n-1)-0.5;
}

int main()
{
    double n;
    cout << "Zadanie 1.34 c"<<endl;
    cout << "Podaj n:" << endl;
    cin >> n;
    for (double i=1.5;i<n;i=i*(-3)){
        cout << i <<",";
    }
    cout <<n<<endl;
    cout <<endl;
    cout << "Podaj pozycje w ciagu: ";
    cin >> n;
    cout <<n<<" wyraz ciagu wynosi: "<< ciag(n);
    return 0;
}
