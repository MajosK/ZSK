#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
    int x,p,q,y;
    p=-5;
    q=10;
    srand(time(NULL));
    x =1 +rand()%(q-p+1);

        if(x<7){
            y=pow(x,3)+1;
        }else{
        switch (x){
        case 7:
            y=cos(x-1);
            break;
        case 9:
            y=sqrt(3*x);
            break;
        default:
            y=-8*x;
        }
        }
    cout<<"Funkcja f(x) wynosi: "<<y;
    return 0;
}
