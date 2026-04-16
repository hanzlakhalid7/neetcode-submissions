class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        int flag = 0;
        vector<int> a(nums.size(),0);
        for(int i = 0;i<nums.size();i++){
            if(nums[i]!=0)
                product *= nums[i];
            else 
                flag += 1;
        }
        if(flag == 1){
            for(int i=0;i<nums.size();i++){
                if(nums[i]!=0) 
                    a[i] = 0;
                else
                    a[i] = product;
            }
        }
        else if(flag==0){
            for(int i=0;i<nums.size();i++)
                a[i] = product/nums[i];
        }
        return a;
    }
};
