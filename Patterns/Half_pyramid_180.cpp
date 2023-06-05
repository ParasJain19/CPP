#include<iostream>
using namespace std;
int main()
{
 int a;
 //int c=a;
 cout<<"Enter no of rows:";
 cin>>a;
 for(int i=1;i<=a;i++)
 {
     for(int j=1;j<=a-i;j++)
     {
        cout<<" ";
     }
     
     for(int j=1;j<=i;j++)
     {
         cout<<"*";
     }
    
    cout<<endl;
 }
}
