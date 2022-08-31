#include<iostream>
#include<limits.h>
using namespace std;
int main()
{int k;
 cin>>k;
int count=INT_MIN;

for(int i=0;k>0;i++)
{
    if(count<(k%10))
    {
        count=k%10;
    }
    k=k/10;
    
}
cout<<"the greatest number is : "<<count; 
    return 0;
}