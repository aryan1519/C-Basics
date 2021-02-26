/*
Push Zeros to end

Given a random integer array, push all the zeros that are present to end of the array. The respective order of other elements should remain same.
Change in the input array itself. You don't need to return or print elements. Don't use extra array.
Note : You need to do this in one scan of array only.
Input format :
Line 1 : Integer N, Array Size
Line 2 : Array elements (separated by space)
Output Format :
Array elements (separated by space)
Constraints :
1 <= N <= 10^6
Sample Input 1:
7
2 0 4 1 3 0 28
Sample Output 1:
2 4 1 3 28 0 0
Sample Input 2:
5
0 3 0 2 0
Sample Output 2:
3 2 0 0 0
*/
//Method-1 O(n)
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
////////////////////////
//Method-2
// O(n^2)
// #include <iostream>
//
// using namespace std;
// void swap(int &x, int &y)
// {
//   int temp{};
//   temp=x;
//   x=y;
//   y=temp;
// }
// int main()
// {
//   int n{};
//   cin>>n;
//   int arr[n];
//   for(int i=0;i<n;i++)
//   {
//     cin>>arr[i];
//   }
// //////////////////
// for(int i=n-2;i>=0;i--)
// {
// if(arr[i]==0)
// {
//   int j=i+1;
//   while(arr[j]!=0 && j<n)
//   {
//     arr[j-1]=arr[j];
//     j++;
//   }
//   arr[j-1]=0;
// }
// }
// /////////////////
//
// cout<<"The sorted array is : "<<endl;
// for(int i=0;i<n;i++)
// {
//   cout<<arr[i]<<" ";
// }
//   return 0;
// }
