#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,first=0,second=1,fibo=0;
    cin>>n;
    cout<<first<<" "<<second<<" ";//0,1 print
    fibo=first+second;
   while(fibo<=n)
    {
        cout<<fibo<<" ";
        first=second;
        second=fibo;
        fibo=first+second;

    }


}
