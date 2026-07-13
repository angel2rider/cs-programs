#include <iostream>
using namespace std;
int main()
{
    int d;
    cout<<"Enter a number between 0 to 9: ";
    cin>>d;
    switch(d)
    {
        case 0:cout<<"zero";break;
        case 1:cout<<"one";break;
        case 2:cout<<"two";break;
        case 3:cout<<"three";break;
        case 4:cout<<"four";break;    
        case 5:cout<<"five";break;
        case 6:cout<<"six";break;
        case 7:cout<<"seven";break;
        case 8:cout<<"eight";break;
        case 9:cout<<"nine";break;
            default:cout<<"wrong input";
    }
    return 0;
}