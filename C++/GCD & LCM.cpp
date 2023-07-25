#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,rem,lcm,gcd;
    cin>>n1>>n2;
    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    gcd=n1;
    int num1,num2;
    cin>>num1>>num2;
    lcm=(num1*num2)/gcd;
    cout<<"GCD:"<<gcd<<endl<<"LCM:"<<lcm;

}
