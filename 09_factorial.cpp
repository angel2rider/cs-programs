#include <iostream>
using namespace std;
int fact(int n)
{
    long f=1;
    for(int i=1;i<=n;i++)
        f=f*i;
    return f;
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"The factorial of "<<n<<" is "<<fact(n);
    cout<<"\n";
    return 0;
}