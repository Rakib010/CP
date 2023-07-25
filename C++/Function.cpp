#include<bits/stdc++.h>
using namespace std;
void  Hollowsquare(int n){
    
    for(int row=1;row<=n;row++){
        for(int col=1;col<=n;col++){
              // Condition to check if we are on the first or last row/column
            if (row == 1 || row == n || col == 1 || col== n){
                cout<<"* ";
            } else{
                cout<<" ";
            }
        } 
      cout<<endl;
    }
}
void squarepattern(int n){
    cout<<"Squre pattern:"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void lefttriangle(int n){
    cout<<"Left triangle:"<<endl;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
 
void righttriangle(int n){
    cout<<"Right triangle:"<<endl;
  for(int row=1;row<=n;row++){
    for(int k=n-row;k>0;k--){
      cout<<" ";
    } for(int col=1;col<=row;col++){
      cout<<"* ";
    } 
    cout<<endl;
  }
}
void  leftdowntriangle(int n){
    cout<<"Left down:"<<endl;
   for(int row=0;row<n;row++){
    for(int col=n-row;col>0;col--){
      cout<<"* ";
    }
    cout<<endl;
   }
}
void rightdowntriangle(int n){
  cout<<"Rightdown:"<<endl;
  //n size of triangle
  for(int row=0;row<n;row++){
    //print spaces....
    for(int k=0;k<row;k++){
      cout<<" ";
      //print stars.....
    } for(int col=n;col>row;col--){
      cout<<"* ";
    }
    cout<<endl;
  }
}
int main(){
  int n;cin>>n;
  squarepattern(n);
 Hollowsquare(n);
  lefttriangle(n);
  righttriangle(n);
  leftdowntriangle(n);
  rightdowntriangle(n);



 }

 
