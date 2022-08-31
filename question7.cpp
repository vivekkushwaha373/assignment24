#include<iostream>
using namespace std;

int fun(int=2,int=3);
int fun(int a,int b)
{
return a+b;
}
int main()
{
   int a,b;
  std::cin>>a>>b;
   cout<<fun(a,b)<<endl;
   cout<<fun(a)<<endl;
   cout<<fun()<<endl;
    return 0;
}