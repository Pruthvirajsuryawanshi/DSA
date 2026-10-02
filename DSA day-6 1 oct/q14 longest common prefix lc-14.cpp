class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string word = strs[0];
        int k = 0;
        if(strs.size()==0) return "";
        if(strs.size()==1) return strs[0];
        while(true){
            for(int i=0;i<strs.size();i++){
                if(k==strs[i].length()) return strs[i].substr(0,k);
                if(strs[i][k]!=word[k]) return strs[i].substr(0,k);
            }
            k++;
        }
    }
};