#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{

    int a,n,i;
    a=rand();
    for(i=0;i<5;i++)
    {
     cout<<"please enter a number"<<endl;
     cin>>n;
     if(a<n)
     {
         cout<<"the number is lesser than the no u have entered"<<endl;
     }
     else if(a>n)
     {
      cout<<"the number is greater than the no u have entered"<<endl;
     }
     else
     {
        cout<<"congrats.....!"<<endl;
        break;
    }
    }
    return 0;
}
