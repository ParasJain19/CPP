#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 3 side of triangle :";
    cin>>a>>b>>c;
    if(a==b)
    {
        if(a==c){
            cout<<"equilateral";
        }
        else
       { cout<<"isosceles";
    }}
    else
    {if(b==c)
    {
        cout<<"isosceles";
    }
    else
    {if(a==c){cout<<"isosceles";}
        else cout<<"scalene";
    }}
        
    }
