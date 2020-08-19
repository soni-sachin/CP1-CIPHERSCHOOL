class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int le = nums.size();
        int i = 0;
        if(k>le){
            k = k%le;
        }
        i = le-k;
        if(i == le){return;}
        if(le == 1){return;}
        reverse(nums.begin(),nums.begin()+i);
        reverse(nums.begin()+i,nums.end());
        reverse(nums.begin(),nums.end());
    }
};
