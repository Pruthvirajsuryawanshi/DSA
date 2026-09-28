#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    int countDigits(int n){
        //Write your code here...
        int count = 0;
        while(n>0){
            n/=10;
            count++;
        }
        return count;
        
    }
};