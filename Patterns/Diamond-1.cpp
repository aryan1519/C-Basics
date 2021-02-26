#include <iostream>

using namespace std;
int main()
{
  int n{};
  cin>>n;
  int i=1,j;

  while(i<=n)
  {
     j=1;
    while(j<=n-i)
    {
      cout<<" ";
      j++;
    }
    j=1;4
    while(j<=2*i-1)
    {
      cout<<"*";
      j++;
    }
    cout<<endl;
    i++;
  }

  ///////////////////////////////////////////////////
   i=1;
    int k=n-1;
  while(i<=n-1)
  {
    cout<<" ";
    int j=1;
    while(j<=2*k-1)
    {
      cout<<"*";

      j++;
    }
    k--;
cout<<endl;
int s=1;
while(s<=i)
{
  cout<<" ";
  s++;
}
i++;

  }
  return 0;
}
