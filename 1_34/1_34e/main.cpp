#include <iostream>

using namespace std;

int ciag (int n){
    if (n==1)
        return 3;
    else if (n/2==1)
        return ciag (n-1)+2;
     else if (n/2==0)
        return ciag (n-1)-1;
}

int main()
{
    int n;
    cout << "Podaj pozycje w ciagu: ";
    cin >> n;
    cout <<n<<" wyraz ciagu wynosi: "<< ciag(n);
    return 0;
}
