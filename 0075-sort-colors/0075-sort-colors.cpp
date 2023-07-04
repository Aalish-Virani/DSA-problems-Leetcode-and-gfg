class Solution {
public:
    void sortColors(vector<int>& nums) {

        short temp;
        short count = nums.size()-1;
        
        while(count>0){

            for(int j=0; j<count; j++){
            
                if (nums[j] >= nums[j+1]){
                    temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                    
                }
                
            }
                        
            count--;
        }
        
    }
};