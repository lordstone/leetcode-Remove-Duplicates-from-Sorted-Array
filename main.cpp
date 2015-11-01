class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() <= 1) return nums.size();
        int ptr = 1, tmp = nums[0];
        while(ptr < nums.size()){
            if(nums[ptr] == tmp){
                nums.erase(nums.begin() + ptr);
            }else{
                tmp = nums[ptr];
                ptr++;
            }
        }
        return nums.size();
    }
};
