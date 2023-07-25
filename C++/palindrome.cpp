#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,x=0,y;
    cin>>n;
    y=n;
    while(n!=0)
    {
        r=n%10;
        x=(x*10)+r;
        n=n/10;
    }
    if(y==x)  cout<<"palindrome";
    else  cout<<"Not palindrome";

}
