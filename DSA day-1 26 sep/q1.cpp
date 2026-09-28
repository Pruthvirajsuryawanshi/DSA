#include<bits/stdc++.h>
using namespace std;
 
int main() {
  // write your code here...
  int n;
  cin>>n;
  set<int>v1;
  for(int i=1;i<=sqrt(n);i++){
      if(n%i==0){
          v1.insert(n/i);
          v1.insert(i);
      }
  } 
  for(auto i:v1){
      cout<<i<<endl;
  }
  return 0;
}