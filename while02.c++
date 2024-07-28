#include<iostream>
using namespace std;
int main()
{
    int i;
    while(true)
    {
        if(i%5==0&&i%7==0)
        {
            cout<<i;
           break;
        }
        i++;
    
    }
    return 0;
}