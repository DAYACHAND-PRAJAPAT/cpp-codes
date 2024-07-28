#include<iostream>
using namespace std;
int main()
{
    char charactor;
    cout<<"enter a charactor:";
    cin>>charactor;
    switch(charactor)
    {
        case 'a':
        {
            cout<<"this is a vowel"; break;
        }
        case 'e':
        {
            cout<<"this is a vowel"; break;
        }
        case 'i':
        {
            cout<<"this is a vowel"; break;
        }
        case 'o':
        {
            cout<<"this is a vowel"; break;
        }
        case 'u':
        {
            cout<<"this is a vowel"; break;
        }
        default:
        {
            cout<<"this is a consonant"; break;
        }
    }
}