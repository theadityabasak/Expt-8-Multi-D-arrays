#include<iostream>
using namespace std;
int main()
{   int a[3][2],i,j,b[3][2],s[3][2];
    cout<<"Input 6 numbers:";
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"MAJOR DIAGONAL ELEMENTS: ";
    for(i=0;i<3;i++)
    {
       for(j=0;j<2;j++)
        {
            if(i==j)
            cout<<a[i][j]<<" ";
        } 
    }
    cout<<" MINOR DIAGONAL ELEMENTS: ";
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            if((i+j)==2)
            cout<<a[i][j]<<" ";
        }
    }

    
    return 0;
}

//Input 6 numbers:1
//2
//3
//4
//5
//6
//Input another 6 numbers:6
//5
//4
//3
//2
//1
//ADDITION OF 2 MATRICES:
//7 7 
//7 7 
//7 7 