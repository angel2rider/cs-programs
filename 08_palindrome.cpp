#include <iostream>
using namespace std;
int main()
{
    int num,i,d,rev=0;
    cout<<"Enter a number: ";
    cin>>num;
    for(i=num;i>0;i=i/10)
    {
        d=i%10;
        rev=(rev*10)+d;
    }
    if(rev==num)
        cout<<"The number is a palindrome";
    else
        cout<<"The number is not a palindrome";
    cout<<"\n";
    return 0;
}