//Write a program to print all odd numbers till n.
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the number till which you want to find odd number:";
    cin>>a;
    for(int i=0;i<=a;i++)
    {
        if(i%2==0)
        {
            continue;
        }
        cout<<i<<endl;
    }
}
