class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1=0,count2=0,c1,c2;
        for(auto & n:nums){
            if(c1==n){
                count1++;
            }
            else if(c2==n){
                count2++;
            }
            else if(count1==0){
                c1=n;
                count1=1;
            }
            else if(count2==0){
                c2=n;
                count2=1;
            }
            else {
                count1--;
                count2--;
            }
        }
        count1=count2=0;
        for(auto &n:nums){
            if(n==c1)count1++;
            else if(n==c2)count2++;
        }
        vector<int> v;
        if(count1>nums.size()/3)
            v.push_back(c1);
        if(count2>nums.size()/3)
            v.push_back(c2);
        return v;
    }
};