#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the binary number:";
    cin>>n;
    int res=0,power=1;
    while(n>0)
    {
       int r=n%10;
       res=res+(r*power);
       power=power*2;
       n=n/10;
    }
    cout<<"the conversion is:"<<res;
}