class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        int count=1;
        int max=0;
        for(auto &a:m){
            int x = a.first;
            auto it = m.find(x-1);
            if(it!=0)
                continue;
            else{
                while(true){
                    auto it = m.find(++x);
                    if(it!=m.end())
                        count++;
                    else 
                        break;
                }
            }
            if(count>max)
                max=count;
            count = 1;
        }
        return max;
    }
};
