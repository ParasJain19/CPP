#include<iostream>
using namespace std;
int main()
{
    float a,b;
    char c;
    cout<<"Enter two numbers";
    cin>>a>>b;
    cout<<"Enter +,-,*or/:";
    cin>>c;
    switch(c)
    {case '+':
    cout<<"Sum is "<<a+b;
    break;
    case '-':
    cout<<"Value is "<<a-b;
    break;
    case '*':
    cout<<"Value is "<<a*b;
    break;
    case '/':
    cout<<"Value is "<<a/b;
    break;
    default:
    cout<<"Please enter appropriate character:";
    }
}
