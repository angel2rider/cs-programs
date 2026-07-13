#include <iostream>
using namespace std;
struct student
{
    int adm_no;
    char name[20];
    short ce,pe,te;
};
int main()
{
    student s;
    int total_score;
    cout<<"\n Enter admission number: ";
    cin>>s.adm_no;
    cout<<"\n Enter name: ";
    cin>>s.name;
    cout<<"\n Enter scores in CE,PE and TE: ";
    cin>>s.ce>>s.pe>>s.te;
    total_score=s.ce+s.pe+s.te;
    cout<<"\n Admission Number: "<<s.adm_no;
    cout<<"\n Name of Student: "<<s.name;
    cout<<"\n CE score: "<<s.ce;
    cout<<"\n PE score: "<<s.pe;
    cout<<"\n TE score: "<<s.te;
    cout<<"\n Total Score: "<<total_score;
    return 0;
}
