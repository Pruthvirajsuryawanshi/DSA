//seive aproach for finding prime number (O(n log logn))
#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin>>n;
  vector<int>v1(n+1, true);
  v1[0] = false;
  v1[1] = false;
  for(int i=2;i*i<=n;i++){
      if(v1[i]){ 
          for(int j=i*i;j<=n;j+=i){
              v1[j]=false;
          }
      }
  }
  for(int i = 2; i <= n; i++){
    if(v1[i]){
        cout << i << endl;
    }
}
  
  
  
  return 0;
}