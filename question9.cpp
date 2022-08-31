#include<iostream>
using namespace std;

int gtr(int a,int b)
{
    int s= a>b?a:b;
    return s;
}
float gtr(float a,float b)
{
    return a>b?a:b;
}
int main()
{
   float a,b;
   cout<<"Enter two numbers: "<<endl;
   cin>>a>>b;
   cout<<gtr(a,b);
    return 0;
}
// float gtr(int a,float b)
// {
//     return a>b?a:b;
// }
//  float gtr(float a,int b)
// {
//     return a>b?a:b;
// }