#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Plese enter the number of rows:";
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a-i+1;j++)
        {
            cout<<j<<" ";
        }cout<<endl;
    }
}
