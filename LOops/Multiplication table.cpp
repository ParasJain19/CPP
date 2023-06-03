#include<iostream>
using namespace std;
int main()
{int a,c;
cout<<"Enter the number for which you want multiplication table:";
cin>>a;
for(int i=1;i<11;i++)
{c=i*a;
cout<<a<<"*"<<i<<"="<<c<<endl;
}
}
