class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> a;
        for(int i=0;i<nums.size();i++){
            if(a.find(nums[i])!=a.end()) return {a[nums[i]],i};
            a[target-nums[i]]=i;
        }
        return {};
    }
};