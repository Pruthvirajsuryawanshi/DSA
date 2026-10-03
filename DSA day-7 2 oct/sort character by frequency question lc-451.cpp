#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        string sortCharacterByFrequency(string s){
            vector<pair<int, char>>v1(123);
            for(char ch:s){
                v1[int(ch)].first++;
                v1[int(ch)].second = ch;
            }

            sort(v1.begin(), v1.end(), greater<pair<int, char>>());


            string ans="";
            for(int i=0;i<v1.size();i++){
                if(v1[i].first==0) break;
                ans.append(string(v1[i].first, v1[i].second));
            }
            return ans;
        }
}