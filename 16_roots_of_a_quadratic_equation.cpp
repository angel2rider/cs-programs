#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a,b,c,r1,r2,d;
    cout<<"Enter the three coefficients of the quadratic equation: ";
    cin>>a>>b>>c;
    if(a==0)
        cout<<"Value of "<<a<<" cannot be zero \n";
    else
    {
        d=(b*b)-(4*a*c);
        if(d>0)
        {
            r1=(-b+sqrt(d))/(2*a);
            r2=(-b-sqrt(d))/(2*a);
            cout<<"Roots are real and unequal \n";
            cout<<"Root1= "<<r1<<"\nRoot2= "<<r2;
        }
        else if(d==0)
        {
            r1=-b/(2*a);
            cout<<"Roots are real and equal \n";
            cout<<"Root1= "<<r1;
        }
        else 
        {
            cout<<"Roots arecomplex and imaginary \n";
        }
    }
    return 0;
}