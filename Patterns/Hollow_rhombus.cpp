#include<iostream>
using namespace std;
int main()
{ int r;
cout<<"Please enter number of rows: ";
cin>>r;
for(int i=1;i<=r;i++)
{
   for(int j=1;j<=r-i;j++)
   {
       cout<<" ";
       
   }
    for(int j=1;j<=r;j++)
    { if(i==1 || i==r)
      cout<<"*"; 
    else
    {
        if(j==1 || j==r)
       {
           cout<<"*";
       } 
        else
        {
        cout<<" ";
        }
    }
    }
cout<<endl;
    
}    
    
}
