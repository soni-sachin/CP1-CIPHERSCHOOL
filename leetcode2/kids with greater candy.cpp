class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>ans(candies.size(),false);
        int MAX = 0;
        vector<int>&C = candies;
        for(int i = 0;i<C.size();i++){
            MAX = max(MAX,C[i]);
        }
        for(int i = 0;i<C.size();i++){
            if(candies[i] + extraCandies >=MAX){
                ans[i] = true;
            }
            else{
                ans[i] = false;
            }
        }
        return ans;
    }
};
