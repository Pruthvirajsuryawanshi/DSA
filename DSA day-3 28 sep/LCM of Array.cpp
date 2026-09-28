#include<bits/stdc++.h>
using namespace std;

class solution {
    int findGcd(int m, int n){
        while(m!=0 && n!=0){
            if(m>n){
                m%=n;
            }
            else{
                    n%=m;
                }
        }
        if(m==0){return n;}
        return m;
    }
public:
    int lcmArray(vector<int>& arr) {
        //Write your code here...
        int lcm = arr[0];
        for(int i=1;i<arr.size();i++){
            int gcd = findGcd(lcm, arr[i]);
            lcm = (lcm/gcd)*arr[i];
            
        }
        return lcm;
        
    }

};