class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        //by two pointers
        int size = nums.size();
        int p1 = 0, p2 = size-1,count=0;   
        while(p1 < p2+1){
            if(nums[p1] == val){
                nums[p1] = nums[p2];
                p2--;
                count++;
            }
            else{
                p1++;
            }
        }
        return size-count;
    }
};