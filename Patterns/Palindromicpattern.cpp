#include<iostream>
using namespace std;
int main()
{int a;
cout<<"Plese enter the number of rows:";
cin>>a;
int b=a;
for(int i=1;i<=a;i++)
{
 for(int j=1;j<=((2*b)-2);j++)
 {
     cout<<" ";
 }b--;
 for(int c=i;c>=1;c--)
 {
     cout<<c<<" ";
 }
 for(int j=2;j<=i;j++)
 {
     cout<<j<<" ";
 }
 cout<<endl;
}
}
