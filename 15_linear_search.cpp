#include <iostream>
using namespace std;
int main()
{
    int ar[25],n,i,item,loc=-1;
    cout<<"Enter the limit of elements: ";
    cin>>n;
    cout<<"Enter the array elements: \n";
    for(i=0;i<n;i++)
        cin>>ar[i];
    cout<<"Enter the element to be searched: ";
    cin>>item;
    for(i=0;i<n;i++)
        if(ar[i]==item)
        {
            loc=i;
            break;
        }
    if(loc!=-1)
        cout<<"The item is found at "<<loc+1;
    else
        cout<<"The item is not found in the array";
    cout<<"\n";
    return 0;
}