#include <iostream>
using namespace std;
int main()
{
    char a[20];
    char *p;
    int count=0;
    cout<<"Enter a string: ";
    cin>>a;
    p=a;
    while(*p!='\0')
    {
        if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u'||*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U')
        {
            count=count+1;
        }
        p=p+1;
    }
    cout<<"\n Number of vowels is "<<count<<"\n";
    return 0;
}