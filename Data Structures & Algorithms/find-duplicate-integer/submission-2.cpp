class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int a=abs(nums[i]);
            if(nums[a]<0)
                return a;
            else
                nums[a]=-nums[a];
        }
        return 0;
    }
};
