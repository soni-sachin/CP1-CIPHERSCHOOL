class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int ii = -1;
        int jj = -1;
        vector<int> res;
        for(int i=0,j = nums.size();i<nums.size();i++,j--){
            if(nums[i] == target){
                ii = i;
                break;
            }
        }
        for(int j=nums.size()-1 ;j>=0 ; j--){
            if(nums[j] ==target){
                jj = j;
                break;
            }
        }
        res.push_back(ii);
        res.push_back(jj);
        return res;
    }
};
