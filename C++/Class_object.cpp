#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    string name;
    int age;
    bool gender;
    
void printinfo(){
  cout<<"name:"<<name<<endl;
  cout<<"age:"<<age<<endl;
  cout<<"gender:"<<gender<<endl;
}     
};
int main(){
  student arr[3];
  for(int i=0;i<3;i++){
    cout<<"Name:";
    cin>>arr[i].name;
    cout<<"age:";
    cin>>arr[i].age;
    cout<<"gender:";
    cin>>arr[i].gender;
  }
  for(int i=0;i<3;i++){
    arr[i].printinfo();
  }

}
