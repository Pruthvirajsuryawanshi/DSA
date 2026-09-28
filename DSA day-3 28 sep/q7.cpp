#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    int lcm(int A, int B) {
        for(int i=A;i<=A*B;i+=A){
            for(int j=B;j<=A*B;j+=B){
                if(i==j){
                    return i;
                }
            }
        }
        
        
    }

};