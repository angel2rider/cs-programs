#include <iostream>
using namespace std;
int main()
{
    int n=0,i;
    char str[20];
    cout<<"Enter a string: ";
    cin>>str;
    for(i=0;str[i]!='\0';i++)
        n++;
    cout<<"The length of the string is "<<n;
    cout<<"\n";
    return 0;
}
