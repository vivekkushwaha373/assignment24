#include<iostream>
using namespace std;
int fib(int n)
{   
    if(n==1)
    return 0;
    if(n==2)
    return 1;
    
    return fib(n-1)+fib(n-2); 
}
int checkfib(int s)
{
    for(int i=1; ;i++)
    {
        if(fib(i)==s)
        return 1;
        if(fib(i)>s)
        return 0;
    }
}
int main()
{
   int s;
   cin>>s;
   
   if(checkfib(s)==1)
   cout<<"yes it is included in fibonacci series";
   else
   cout<<"It is not included in fibonacci series";
//  cout<<fib(s);

    return 0; 
}