#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s; int l,i,t;
    cout<<" ENTER A SENTENCE:";
    cin>>s;
    l = s.length();
    for(i=0;i<l/2;i++)
    {
        t = s[i];
        s[i]=s[l-i-1];
        s[l-i-1]=t;
    }

    cout<<"REVERSED STRING: "<<s;
}

//ENTER A SENTENCE:ADITYA
//REVERSED STRING: AYTIDA