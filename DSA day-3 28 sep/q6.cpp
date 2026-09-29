#include<bits/stdc++.h>
using namespace std;
 
int main() {
  // write your code here...
  int m,n;
  cin>>m>>n;
  while(n>0){
      if(m>n){
          m = m-n;
      }else{
          n = n-m;
      }
  }
  cout<<m<<endl;
  return 0;
}