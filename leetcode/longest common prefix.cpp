class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        if(strs.size() ==0){
            return res;
        }
        sort(strs.begin(),strs.end());
        for(int i=0;i<strs[0].size();i++){
            if(strs[0][i] == strs.back()[i]){
                res = res + strs[0][i];
            }
            else
                break;
        }
        return res;
    }
};
