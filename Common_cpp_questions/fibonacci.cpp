#include <iostream>
using namespace std;


int main()
{
int n{};
cin>>n;
int a{1},b{1}, sum{0};
int i{3};
if(n==1 ||n==2)
  cout<<a;
else
{
  sum=0,a=1,b=1;
  for(i=3;i<=n;i++)
  {

    sum=(a+b);
    a=b;
    b=sum;
  }
  cout<<sum;
}

return 0;
}
