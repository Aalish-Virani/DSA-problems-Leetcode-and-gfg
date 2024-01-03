class Solution {
public:
    void sortColors(vector<int>& nums) {

        for (short i=0; i<nums.size()-1; i++){
            
            for (short j=i+1; j<(nums.size()); j++){
                
                if (nums[i]>nums[j]){
                    
                    short temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }
        
    }
};