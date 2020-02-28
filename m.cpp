#include<iostream>
using namespace std;
struct stud
{
int roll;
char name[20];
};
int main()
{
stud s[100];
int n,i;
cout<<"enter number of students";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"enter roll number and name of student\t"<<i;
cin>>s[i].roll>>s[i].name;
};
cout<<"roll number and name";
for(i=0;i<n;i++)
{
cout<<s[i].roll<<" "<<s[i].name;
cout<<"\n";
}
return 0;
}
