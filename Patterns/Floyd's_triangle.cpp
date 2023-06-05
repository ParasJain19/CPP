#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Plese enter now of rows:";
    cin>>a;
    int v=1;
    for(int i=1;i<=a;i++)
    {
    for(int j=1;j<=i;j++)
    {
        cout<<v<<" ";
        v++;
    }
    cout<<endl;
    }
}
