#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s; int l,i,t;
    cout<<" ENTER A SENTENCE:";
    cin>>s;
    string s1=s;
    l = s.length();
    for(i=0;i<l/2;i++)
    {
        t = s[i];
        s[i]=s[l-i-1];
        s[l-i-1]=t;
    }
    if(s1 == s)
    cout<<"STRING IS PALINDROME "<<s;
    else
    cout<<"STRING ISN'T PALINDROME ";
}

// ENTER A SENTENCE:MADAM
//STRING IS PALINDROME MADAM

//ENTER A SENTENCE:WHAT
//STRING ISN'T PALINDROME 

