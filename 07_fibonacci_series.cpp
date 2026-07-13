#include <iostream>
using namespace std;
int main()
{
    int f1=0,f2=1,f3,n;
    cout<<"\n Enter number of terms: ";
    cin>>n;
    cout<<f1<<"\t"<<f2;
    for(int i=3;i<=n;i++)
    {
        f3=f1+f2;
        cout<<"\t"<<f3;
        f1=f2;
        f2=f3;
    }
    cout<<"\n";
    return 0;
}