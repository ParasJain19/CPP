#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter a number to check prime or  not:";
    cin>>n;
    for( i=2;i<n;i++)
    {if(n%i==0)
    {cout<<"NOt a prime";
        break;}
    }
        if(i==n)
        cout<<"Prime";
}
