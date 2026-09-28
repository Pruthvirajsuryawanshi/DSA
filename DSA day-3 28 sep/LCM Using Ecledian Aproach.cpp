#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    int lcm(int A, int B) {
        int GCD;
        int temp1 = A;
        int temp2 = B;
        while(A!=0 && B!=0){
            if(A>B){
                A = A%B; 
            }else{
                B = B%A;
            }
        }
        if(A>B){GCD = A;}else{GCD=B;}
        return (temp1*temp2)/GCD;
    }

};