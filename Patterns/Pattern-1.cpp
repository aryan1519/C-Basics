/*
Pattern
Eg n=5

Output:-

1
21
321
4321
54321

*/
#include <iostream>
using namespace std;
int main()
 {
   int n{};
   cin>>n;
  int i=1;

while(i<=n)
{
  int j=i;
  while(j>=1)
  {
    cout<<j;
    j--;
  }
cout<<endl;
i++;

}
   return 0;
}
