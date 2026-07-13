#include <iostream>
using namespace std;
int main()
{
    int num,rem[20],i=0;
    cout<<"Enter a decimal number: ";
    cin>>num;
    while(num!=0)
    {
        rem[i]=num%2;
        i++;
        num=num/2;
    }
    cout<<"The binary number is: ";
    for(int j=i-1;j>=0;j--)
        cout<<rem[j];
    cout<<"\n";
    return 0;
}