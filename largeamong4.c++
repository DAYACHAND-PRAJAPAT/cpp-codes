#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"enter four numbers:";
    cin>>a>>b>>c>>d;
    if(a>b&&a>c&&a>d)
    {
        cout<<a<<" number is the large number";
    }
    if(b>a&&b>c&&b>d)
    {
        cout<<b<<" number is the large number";
    }
    if(c>b&&c>a&&c>d)
    {
        cout<<c<<" number is the large number";
    }
    if(d>b&&d>c&&d>a)
    {
        cout<<d<<" number is the large number";
    }
}