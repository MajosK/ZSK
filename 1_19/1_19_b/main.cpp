#include <iostream>

using namespace std;

int main()
{
    int x,a;
    x=-4;
    for (a=0; a<5; a++){
            if(x!=2 && x!=8){
                cout<<x<<endl;
            }else{
                x+=3;
                cout<<x<<endl;
            }
            x+=3;
    }
}
