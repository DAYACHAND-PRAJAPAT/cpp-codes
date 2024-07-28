#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int b=2;
    int c=1;
    int d=0;
    cout<<(a<<b)<<endl;
    cout<<(a>>b)<<endl;
    cout<<(c|d)<<endl;
    cout<<(c|c)<<endl;
    cout<<(d|d)<<endl;
    cout<<(c^c)<<endl;
    cout<<(d^d)<<endl;
    cout<<(a&b)<<endl;
    cout<<(c&d)<<endl;
}