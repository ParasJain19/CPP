#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Please enter now of rows:";
    cin>>n;
     for(int i=1;i<=n;i++)
     {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(int c=1;c<=((2*n)-(2*i));c++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
     }
     for(int i=n;i>=1;i--)
     {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(int c=1;c<=((2*n)-(2*i));c++)
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
