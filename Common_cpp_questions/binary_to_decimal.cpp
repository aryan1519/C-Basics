#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int N{};
cin>>N;
int i=0,sum=0;

while(N!=0)
{
  sum=sum+((N%10)*pow(2,i));
  i++;
  N/=10;
}
cout<<sum;
  return 0;
}
