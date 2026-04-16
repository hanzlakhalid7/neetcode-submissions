class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> m(3,0);
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        for(int i=0;i<nums.size();i++){
            if(m[0]!=0){
                nums[i]=0;
                m[0]--;
            }
            else if(m[1]!=0){
                nums[i]=1;
                m[1]--;
            }
            else 
                nums[i]=2;
        }   
    }
};