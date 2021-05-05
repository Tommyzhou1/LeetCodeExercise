class Solution {
public:
    int candy(vector<int>& ratings) {
        int ratingSize = ratings.size();
        if(ratingSize < 2){
            return 1;
        }
        vector<int>nums(ratingSize, 1);
        for (int i = 1; i < ratingSize; i++){
            cout<<"Hiiii"<<endl;
            if(ratings[i] > ratings[i-1] && nums[i] <= nums[i-1]){
                nums[i] = nums[i-1]+1;
            }
        }
        for (int j = ratingSize - 1; j > 0; j--){
            if(ratings[j] < ratings[j-1] && nums[j-1] <= nums[j]){
                nums[j-1] = nums[j]+1;
            }
        }
        return accumulate(nums.begin(),nums.end(),0);
    }
};