#include<bits/stdc++.h>
using namespace std;
void BasicPointer(){
   int v=10; 
    int* ptr=&v; 
    cout<<"V:"<<v<<endl<<"ptr:"<<ptr<<endl<<"*ptr:"<<*ptr<<endl;
    *ptr=20;
    cout<<"new declear ptr:"<<*ptr<<endl;   
}
void PointerArithmetic(){
  int a=5;
  int* p=&a;
  cout<<"p:"<<p<<endl; //p er address-2000
  p++;
  cout<<"P:"<<p<<endl;  //p er address-2004
}
void pointerarray(){
   int arr[]={10,20,30,40};
  // cout<<*arr<<endl;
   int *ptr=arr;
   for(int i=0;i<3;i++){
      cout<<"ptr value:"<<*(ptr+i)<<endl<<"Ptr address:"<<(ptr+i)<<endl;
   }
}
void pointer_to_pointer(){
   int x=8;
   int* ptr=&x;
   int** ptr2=&ptr;
   cout<<x<<" "<<*ptr<<" "<<**ptr2 <<endl;
   cout<<ptr<<endl<<ptr2<<endl;
}
void swap(int *a, int *b){
   int temp=*a;
   *a=*b;
   *b=temp;
}
int main(){
//BasicPointer();
// PointerArithmetic();
// pointerarray();
//pointer_to_pointer();
  int a=2,b=4;
  int* aptr=&a;
  int* bptr=&b;
  swap(aptr,bptr);
  cout<<"A:"<<a<<endl<<"B:"<<b;

}
