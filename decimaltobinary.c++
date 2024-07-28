#include<iostream>
using namespace std;
int main()
{
    int n,r;
    int res=0,power=1;
    cout<<"enter a decimal number:";
    cin>>n;
    while(n>0)
    {
       r=n%2;
       res=res+(r*power);
       power=power*10;
       n=n/2;
    }
    cout<<"the conversion is:"<<res;

}