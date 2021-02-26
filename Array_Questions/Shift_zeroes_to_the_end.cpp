#include <iostream>

using namespace std;
void swap(int &x, int &y)
{
  int temp{};
  temp=x;
  x=y;
  y=temp;
}
int main()
{
  int n{};
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
//////////////////
int count=0;
for(int i=0;i<n;i++)
{
  if(arr[i]!=0)
    {

      arr[count]=arr[i];
      count++;
    }
}
for(int i=count;i<n;i++)
{
  arr[i]=0;
}
/////////////////

cout<<"The sorted array is : "<<endl;
for(int i=0;i<n;i++)
{
  cout<<arr[i]<<" ";
}
  return 0;
}
