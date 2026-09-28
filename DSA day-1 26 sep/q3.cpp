//Prime number
#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin>>n;
  bool isPrime = true;
  if(n<2){
      isPrime = false;
  }
  for(int i=2; i*i<=n; i++){ 
      if(n%i==0){
          isPrime=false;
      }
  }
  cout<<isPrime<<endl;
  return 0;
}