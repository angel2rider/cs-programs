#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a,b,c,l,s,r,area;
    const float pi=3.14;
    int n;
    char ch;
    cout<<"\n \t \t Menu";
    cout<<"\n 1. Area of a Rectangle";
    cout<<"\n 2. Area of a Circle";
    cout<<"\n 3. Area of a Triangle";
    cout<<"\n 4. Exit";
    do
    {
        cout<<"\n Select an option from the menu: ";
        cin>>n; 
        switch(n)
        {
            case 1:cout<<"\n Enter length and breadth: ";
            cin>>l>>b;
            area=l*b;
            cout<<"\n Area of the rectangle= "<<area;
            break;
            case 2:cout<<"\n Enter radius: ";
            cin>>r;
            area=pi*r*r;
            cout<<"\n Area of the circle= "<<area;
            break;
            case 3:cout<<"\n Enter the three sides of the triangle: ";
            cin>>a>>b>>c;
            s=(a+b+c)/2.0;
            area=sqrt(s*(s-a)*(s-b)*(s-c));
            cout<<"\n Area of the triangle= "<<area;
            break;
            case 4:exit(0);
            default:cout<<"\n Wrong choice";
        }
    cout<<"\n Do you want to continue: ";
    cin>>ch;
    } while (ch=='y' || ch=='Y');
    return 0;
}