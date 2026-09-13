#include <iostream>
using namespace std;
int main()
{
    int n,a[100],i,j,temp;
    cout<<"Enter the size of an array: ";
    cin>>n;
    cout<<"Enter the elements of an array: ";
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }  
    cout<<"\nThe sorted array is: ";
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<"\n";
    return 0;
}