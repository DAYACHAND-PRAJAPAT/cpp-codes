#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"enter a number from where you want to print:";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        sum+=i;
        i++;
    }
    cout<<" "<<sum;
    return 0;
}