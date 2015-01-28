#include<iostream>
using namespace std;
int main()
{
int i,j,n,k;
cout<<"enter the size of triangle";
cin>>n;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
cout<<"_";
for(k=1;k<=n;k++)
{
    cout<<"* ";
}
}
cout<<"\n";
}
return 0;
}
