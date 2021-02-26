#include <iostream>
using namespace std;
int main()
 {
   int N{};
   cin>>N;
  int i=1;
  while(i<=N)
  {
    int j=1;
    while(j<=N-i)
    {
      cout<<" ";
      j++;
    }
    int itr=1;
    while(itr<= (2*i-1))
    {
      cout<<"*";
      itr++;
    }
    cout<<endl;
    i++;
  }

   return 0;
}
