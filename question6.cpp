#include<iostream>
using namespace std;
int fun(int &,int &);
int fun(int &a,int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}
int main()
{
    int x,y;
    cin>>x>>y;
    fun(x,y);
    cout<<x<<" "<<y;
    return 0;
}