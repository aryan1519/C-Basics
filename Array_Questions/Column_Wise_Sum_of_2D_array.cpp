#include <iostream>

using namespace std;

int main()
{
int M{},N{};
cin>>M>>N;
int arr[M][N];
for(int i=0;i<M;i++)
{
  for(int j=0;j<N;j++)
  {
    cin>>arr[i][j];
  }
}
int sum{};
for(int j=0;j<N;j++)
{
  for(int i=0;i<M;i++)
  {
  sum=sum+arr[i][j];
  }
  cout<<sum<<" ";
  sum=0;
}
  return 0;
}
