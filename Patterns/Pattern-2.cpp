#include <iostream>
using namespace std;

int main()
{
  int n{};
  cin>>n;
  int i=1;
  while(i<=n)
  {
    int s=1;
    while(s<=n-i)
    {
      cout<<" ";
      s++;
    }
    int j=i;
    while(j<=2*i-1)
    {
      cout<<j;
      j++;
    }

    int k=2*i-2;
    while(k>=i)
    {
      cout<<k;
      k--;
    }

    cout<<endl;
    i++;
  }

  return 0;
}
