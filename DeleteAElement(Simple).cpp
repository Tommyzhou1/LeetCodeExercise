class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        //by two pointers
        int size = nums.size();
        int count = 0;
        int j = 0;
        for(int i = 0; i<size; i++){
            if(nums[i]!=val){
                nums[j]=nums[i];
                j++;
            }
            else{
                count++;
            }
        }
        return size-count;
    }
};