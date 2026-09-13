#include <iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter a natural number: ";
    cin>>n;
    for(int i=1;i<=n;i++)
        sum=sum+i;
    cout<<"\n The sum of first natural numbers = "<<sum<<"\n";
    return 0;
}