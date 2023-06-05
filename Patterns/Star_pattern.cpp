#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Plese enter the number of rows:";
cin>>a;
int b=a;
for(int i=1;i<=a;i++)
{
    for(int g=1;g<=((2*a)-(2*i));g++)
    {
        cout<<" ";
    }
    for(int j=1;j<=((2*(i-1))+1);j++)
    {
    cout<<"* ";
    }
        cout<<endl;
}

for(int i=a;i>=1;i--)
{
    for(int g=1;g<=((2*a)-(2*i));g++)
    {
        cout<<" ";
    }
    for(int j=1;j<=((2*(i-1))+1);j++)
    {
    cout<<"* ";
    }
        cout<<endl;
}
}
