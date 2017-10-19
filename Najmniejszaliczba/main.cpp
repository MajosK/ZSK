#include <iostream>

using namespace std;

int main()
{
    double a,b,c,d,n;
    cout<<"Podaj a: "<< endl;
    cin>>a;
    cout<<"Podaj b: "<< endl;
    cin>>b;
    cout<<"Podaj c: "<< endl;
    cin>>c;
    cout<<"Podaj d: "<< endl;
    cin>>d;
    if(a<b)
    {
        n=a;
        if(a<c)
        {
            n=a;
            if(a<d)
            {
                n=a;
            }else
            {
                n=d;
            }

        }else
        {
            n=c;
            if(c<d)
            {
                n=c;
            }else
            {
                n=d;
            }
        }
    }else
    {
        n=b;
        if(b<c)
        {
            n=b;
            if(b<d)
            {
                n=b;
            }else
            {
                n=d;
            }
        }else
        {
            n=c;
            if(c<d)
            {
                n=c;
            }else
            {
                n=d;
            }
        }
    }
    cout<<"Najmniejsza liczba to: "<<n<<endl;
    return 0;
}


