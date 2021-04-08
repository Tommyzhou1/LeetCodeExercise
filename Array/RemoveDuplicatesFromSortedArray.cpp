class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //using two pointers
        //set up a slow runner and a fast runner
        int i = 0, j = 0, counter = 0;
        for(i = 1; i < nums.size(); i++){
            if(nums[i]!=nums[j]){
                j++;
                nums[j]=nums[i];
            }
            else{
                counter++;
                continue;
            }
        }
        return nums.size()-counter;
    }
};