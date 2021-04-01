class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_ones = 0, temp_max = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                temp_max++;
                if(i == (nums.size() -1) && max_ones == 0){              
                    return temp_max;
                }
            }
            else{  
                if(temp_max > max_ones){
                    max_ones = temp_max;
                }
                temp_max = 0;
            }
        }
        if(temp_max > max_ones){
            max_ones = temp_max;
        }
        return max_ones;
        
    }
};

