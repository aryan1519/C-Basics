#include <iostream>
#include <math.h>
using namespace std;

int main()
{
int n{};
cin>>n;
cout<<2<<endl;


for(int i=3;i<=n;i++)
{
  int p=1;
  for(int j=2;j<=pow(i,0.5);j++)
  {
    if(i%j==0)
      {
        p=0;
        break;
      }
  }
  if(p==1)
    cout<<i<<endl;

}


  return 0;
}
