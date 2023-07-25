#include<bits/stdc++.h>
using namespace std;
int main(){
   int arr[50],n,value;
   cin>>n;
   for(int i=0;i<n;i++) cin>>arr[i];
    cout<<"Enter count number:";cin>>value;
    int countt=0;
   for(int i=0;i<n;i++){
      if(arr[i]==value)
            countt++; 
   } 
   cout << "Frequency of element " << value << " is: " << countt << endl;
}

//count number

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[50],n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    unordered_map<int,int> countt;
     for(int i=0;i<n;i++){
      countt[arr[i]]++;
     }
    for(auto it:countt){
       cout << it.first << " number: " << it.second << " \n";


}
