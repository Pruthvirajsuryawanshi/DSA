#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        string reverseWords(string s){
            stringstream ss(s);
            string word;
            vector<string>v1;

            while(ss>>word){
                v1.push_back(word);
            }
            string ans = "";
            for(int i=v1.size()-1;i>=0;i--){
                ans+=v1[i];
                if(i!=0){
                    ans+=" ";
                }
            }
            return ans;
        }
}