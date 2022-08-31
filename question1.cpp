#include<iostream>
using namespace std;
int main()
{
int i;
cin>>i;
for(int k=2;k<=i;k++)
{
if(i%k==0 && i!=k)
{cout<<"number is not prime";
    break;}
    if(i==k)
    {
        cout<<"number is prime";
    }
}
return 0;
}