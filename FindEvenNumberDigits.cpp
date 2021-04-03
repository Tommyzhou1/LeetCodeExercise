class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int counts = 0;
        for(int i = 0; i < nums.size(); i++){
            if(digitsFinder(nums[i])%2 == 0){
                counts+=1;
            }
        }
        return counts;
    }
    int digitsFinder(int inputNum){
        int divider,digits = 0;
        while(divider != 0){
            digits++;
            divider = inputNum/10;
            inputNum = divider;
        }
        return digits;
    }
};