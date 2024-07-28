#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter three numbers:";
    cin>>a>>b>>c;
    if(a>b&&a>c)
    {
        cout<<"this number is large:"<<a;
    }
    if(b>a&&b>c)
    {
        cout<<"this number is large:"<<b;
    }
    if(c>a&&c>b)
    {
        cout<<"this number is large:"<<c;
    }
}