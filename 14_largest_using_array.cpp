#include <iostream>
using namespace std;
int main()
{
    int ar[20],n,i,big;
    cout<<"Enter the array size: ";
    cin>>n;
    cout<<"Enter the array elements: \n";
    for(i=0;i<n;i++)
        cin>>ar[i];
    big=ar[0];
    for(i=1;i<n;i++)
    {
        if(ar[i]>big)
            big=ar[i];
    }
    cout<<"\n Largest number "<<big;
    cout<<"\n";
    return 0;
}