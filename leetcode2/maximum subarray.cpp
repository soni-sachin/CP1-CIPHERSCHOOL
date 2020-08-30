class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() == 0){return 0;}
        int ptr = nums[0];
        int ans = ptr;
        for(int i=1;i<nums.size();i++){
            ptr = max(ptr+nums[i],nums[i]);
            ans = max(ptr , ans);
        }
        return ans;
    }
};
