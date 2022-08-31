#include<iostream>
using namespace std;
float fun(int r)
{
    return 3.14*r*r;
}
int fun(int l,int b)
{
    return l*b;
}
int main()
{
    int r;
    cout<<"enter radius of circle: ";
    cin>>r;
    int a,b;
    cout<<"enter dimension of rectangle: ";
    cin>>a>>b;
    int x,y;
    cout<<"enter dimension of traingle: ";
    cin>>x>>y;
    cout<<"area of circle: "<<fun(r)<<endl;
    cout<<"area of rectangle: "<<fun(a,b)<<endl;
    cout<<"area of triangle: "<<fun(x,y)/2;
    return 0;
}