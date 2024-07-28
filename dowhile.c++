#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum=0;
    cout<<"enter a number n:";
    cin>>n;
    do
    {  
        int num;
        cin>>num;
        sum+=num;
        n--;
    } while (n>0);
      cout<<sum;
}