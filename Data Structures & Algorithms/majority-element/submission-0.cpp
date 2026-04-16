class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> v;
        int i;
        for(i=0;i<nums.size();i++){
            v[nums[i]]++;
            if(v[nums[i]]>=(nums.size()/2)+1)
                break;
        }
        return nums[i];
    }
};