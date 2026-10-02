#include<bits/stdc++.h>
using namespace std;
 
int main() {
  // write your code here...
  int x,y;
  cin>>x>>y;
  int minimum = min(x,y);
  int ans = 1;
  for(int i=2;i<=minimum;i++){
      if(x%i==0 && y%i==0){
          ans = i;
      }
  }cout<<ans<<endl;
  return 0;
}