#include <iostream>

using namespace std;

int main()
{
int n{};
int i=0,j=0,arr[n],a{-99999},b{};
cin>>n;
for(int k=0;k<n;k++)
{
  cin>>arr[k];
}
for(int k=0;k<n;k++)
{

  b=arr[k];
  if(b>a)
    if(arr[k+1]>b)
      i+=0;
    else if(arr[k+1]<b)
      j++;

    else if(b<a)
      if(arr[k+1]<b)
        j+=0;
      else if(arr[k+1]>b)
      i++;

  a=b;
}
if(i>=2 || j>=2)
{
  cout<<"false";
}
else
{
  cout<<"true";
}


  return 0;
}
