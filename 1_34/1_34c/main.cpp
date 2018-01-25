#include <iostream>

using namespace std;
double ciag (double n){
    if (n==1)
        return 0.2;
    else
    return ciag (n-1)*(-3);
}

int main()
{
    double n;
    cout << "Zadanie 1.34 c"<<endl;
    cout << "Podaj n:" << endl;
    cin >> n;
    for (double i=0.2;i<n;i=i*(-3)){
        cout << i <<",";
    }
    cout <<n<<endl;
    cout <<endl;
    cout << "Podaj pozycje w ciagu: ";
    cin >> n;
    cout <<n<<" wyraz ciagu wynosi: "<< ciag(n);
    return 0;
}
