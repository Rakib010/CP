#include<bits/stdc++.h>
using namespace std;
int  main()
{
  int n,revers=0,r;
  cin>>n;
  while(n!=0)
  {
      r=n%10;
      revers=revers*10+r;
      n=n/10;
  }
   cout<<revers;


}
