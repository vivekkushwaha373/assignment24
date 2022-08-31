#include<iostream>
using namespace std;
int main()
{
    int x;
    int y;
    int s=1;
    cin>>x>>y;
    
    for(int i=1;i<=y;i++)
    {
        s=s*x;
    }
    cout<<"answer: "<<s;
}