#include<iostream>
using namespace std;
int main()
{
    int per;
    cout<<"enter your percentage:";
    cin>>per;
    if(per>=90)
    {
        cout<<"great performance!";
    }
    else if(per<90&&per>=80)
    {
        cout<<"good performance!";
    }
    else if(per<80&&per>=55)
    {
        cout<<"average!";
    }
    else if(per<55&&per>=33)
    {
        cout<<"only pass!!";
    }
    else if(per<33)
    {
        cout<<"failed!!!";
    }
}