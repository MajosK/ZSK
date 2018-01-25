#include <iostream>

using namespace std;
double ciag (double n){
    if (n==1)
        return (-10);
    else
    return ciag (n-1)/(-2);
}

int main()
{
    double n;
    cout << "Podaj pozycje w ciagu: ";
    cin >> n;
    cout <<n<<" wyraz ciagu wynosi: "<< ciag(n);
    return 0;
}
