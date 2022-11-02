class Solution {
public:
    bool check(vector<int>& nums)
    {
        int countPair = 0, size = nums.size();
        for(int i = 1; i < size; i++) if(nums[i - 1] > nums[i]) countPair++;
        if(nums[size - 1] > nums[0]) countPair++;
        return countPair <= 1;
    }
};