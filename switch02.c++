#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    char sign;
    cout<<"enter to numbers:";
    cin>>a>>b;
    cout<<"enter mathematical operation:";
    cin>>sign;
    switch(sign)
    {
        case '+':
        {
           c=a+b;
           cout<<"the addition of a and b is:"<<c; break;
        } 
        case '-':
        {
           c=a-b;
           cout<<"the substraction of a and b is:"<<c; break;
        }
        case '*':
        {
           c=a*b;
           cout<<"the multiplication of a nd b is:"<<c; break;
        }
        case '/':
        {
           c=a/b;
           cout<<"the division of a by b is:"<<c; break;
        }
        default:
        {
            cout<<"wrong operator"; break;
        }   

    }
}
