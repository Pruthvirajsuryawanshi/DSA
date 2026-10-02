#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        string help(string s){
            for(int i=s.length()-1;i>=0;i--){
                if((s[i]-'0')%2!=0){
                    return s.substr(0,i+1);
                }
            }
            return "";
        }
};

int main(){
    Solution h;
    string longestOdd = h.help("1934617");
    cout<<longestOdd<<endl;
    return 0;
}