#include <iostream>
using namespace std;
long fact(int N)
{
    long f;
    for(f=1;N>1;N--)
        f=f*N;
    return f;
}
int main()
{
    int n,r;
    long ncr;
    cout<<"Enter the value of n and r: ";
    cin>>n>>r;
    cout<<"\n factorial of "<<n<<" is "<<fact(n);
    cout<<"\n factorial of "<<r<<" is "<<fact(r);
    ncr=fact(n)/(fact(r)*fact(n-r));
    cout<<"\n"<<n<<"c"<<r<<"="<<ncr;
    return 0;
}