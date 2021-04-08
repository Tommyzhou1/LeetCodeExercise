class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int arrSize = arr.size();
        
        int j = 0;
        for(int i = 0; i<arrSize; i++){
            if(arr[i] == 0){
                for(j=arrSize-1; j>i; j--){
                    arr[j] = arr[j-1];
                }
                i++;
            }
        }
    }
};