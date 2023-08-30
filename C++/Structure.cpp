#include<bits/stdc++.h>
using namespace std;
 
 struct name{
    int age;
    char name[10];
    float salary;
 };
 union dada
 {
    /* data */
    int boys,girl;

 };
 
 int main(){
    union dada x;
    
    name n;int i;
    for(int i=0;i<5;i++){
        cin>>n.name[i];
    } 
    cin>>n.age>>n.salary;  
  
    cout<<n.name<<" "<<n.age<<" "<<n.salary;

    cin>>x.boys>>x.girl; //union function
    cout<<x.boys<<x. girl;
    cout<<endl;
   
 }
   
