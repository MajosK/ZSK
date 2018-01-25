#include <iostream>

using namespace std;

int ciag (int n){
    if (n==1)
        return 4;
    else
    return ciag (n-1)+3;
}

int main()
{
    int n;
    cout << "Podaj pozycje w ciagu: ";
    cin >> n;
    cout <<n<<" wyraz ciagu wynosi: "<< ciag(n);
    return 0;
}
