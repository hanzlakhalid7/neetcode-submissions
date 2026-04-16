class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> a;
        for(int i=0;i<nums.size();i++){
            a[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            int n = target-nums[i];
            if(a[n] && a[n]!=i){
                return {i,a[n]};
            }
        }
    }
};
