#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1 = "HELLO MY NAME IS ";
    string str2;
    cout<<"ENTER YOUR NAME";
    cin>>str2;
    string cat = str1 + str2;
    cout<<"CONCATENATED STRING: "<<cat;
    return 0;
}

//ENTER YOUR NAMEADITYA
//CONCATENATED STRING: HELLO MY NAME IS ADITYA
