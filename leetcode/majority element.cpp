class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count =1;
        int found = nums[0];
        for(int i=1;i<nums.size();i++){
            if(found == nums[i]){
                ++count;
            }
            else{
                count--;
            }
            if(count ==0){
                found = nums[i];
                count = 1;
            }
        }
        return found;
        
    }
};
