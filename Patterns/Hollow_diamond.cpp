#include<iostream>
using namespace std;
int main()
{
      int n;
    cout<<"Plese enter the number of rows:";
cin>>n;
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n-i;j++)
    {
        cout<<" ";
    }cout<<"*";
for(int c=1;c<=((2*i)-3);c++)
{ cout<<" ";}
     if(i>1)cout<<"*";
    cout<<endl;
}
for(int i=n;i>=1;i--)
{
    for(int j=1;j<=n-i;j++)
    {
        cout<<" ";
    }cout<<"*";
for(int c=1;c<=((2*i)-3);c++)
{ cout<<" ";}
    if(i>1)cout<<"*";
    cout<<endl;
}
}
