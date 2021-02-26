#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int n{};
  cin>>n;
  int i=1,j,s;
  while(i<=((n/2)+1))
  {
    j=1;
    s=1;
    while(s<=(((n/2)+1)-i))
    {
      cout<<" ";
      s++;
    }
    while(j<=2*i-1)
    {
      cout<<"*";
      j++;
    }
    cout<<endl;
    i++;
  }
  /////////////////////////
  i=1;
  int k=n/2;

while(i<=n/2)
{
  s=1;

  while(s<=i)
  {
    cout<<" ";
    s++;
  }
  j=1;
  while(j<=2*k-1)
  {
    cout<<"*";
    j++;
  }
  cout<<endl;
  k--;
  i++;
}


  return 0;
}
