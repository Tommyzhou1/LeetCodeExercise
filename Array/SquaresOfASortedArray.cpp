class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();

        vector<int> result(n);

        int left = 0,right = n - 1,squares = 0;
        

        for (int i = n - 1; i >= 0; i--) {
            squares = 0;
            if (abs(nums[left]) < abs(nums[right])) {
                squares = nums[right];
                right--;
            } else {
                squares = nums[left];
                left++;
            }
            result[i] = pow(squares,2);
        }
        return result;
    }
};