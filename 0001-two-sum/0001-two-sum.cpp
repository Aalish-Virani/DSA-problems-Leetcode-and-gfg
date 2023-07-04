class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> answer;

        bool isFound = false;

        for(short i=0; i<nums.size(); i++){
        
            for(short j=i+1; j<nums.size(); j++){            

                if ( (nums.at(i) + nums.at(j) ) == target){
                    answer.push_back(i);
                    answer.push_back(j);

                    isFound = true;
                    break;
                }
        
            }

            if (isFound == true){
                break;
            }
        
        }

        return answer;

    }
};