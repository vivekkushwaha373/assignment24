#include<iostream>
using namespace std;
int combination(int n,int i)
{
    int p=1,q=1;
    for(int m=1;m<=n;m++)
    {
        p=p*m;
    }
    for(int m=1;m<=n-i;m++)
    {
        q=q*m;
    }
    for(int m=1;m<=i;m++)
    {
        q=q*m;
    }
    return p/q;
}

int main()
{
    int x;
    cin>>x;
    for(int i=0;i<=x;i++)
    {for(int k=0;k<x-i;k++)
    cout<<" ";
        for(int m=0;m<=i;m++)
        cout<<combination(i,m)<<" ";
        
        for(int k=0;k<x-i;k++)
    cout<<" ";
    cout<<endl;
    }    
    return 0;
}