#include <iostream>
using namespace std;
int main()
{
int N{};
cin>>N;
int rev{};
while(N!=0)
{
  rev=(rev*10)+(N%10);
  N/=10;
}
cout<<rev;
  return 0;
}
