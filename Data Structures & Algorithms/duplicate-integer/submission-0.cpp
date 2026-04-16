class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> a;
        for(int i = 0;i<nums.size();i++){
            if(!a[nums[i]])
                a[nums[i]] = 1;
            else 
                return true;
        }
        return false;
    }
};