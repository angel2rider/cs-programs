#include <iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter the limit: ";
    cin>>n;
    for(i=1;i<=n;i++)
        sum=sum+(i*i);
    cout<<"\n The sum of squares of natural numbers is ";
    cout<<sum;
    cout<<"\n";
    return 0;
}