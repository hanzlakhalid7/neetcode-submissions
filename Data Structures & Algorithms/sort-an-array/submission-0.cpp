class Solution {
public:
    vector<int> merge(vector<int>& n1,vector<int> &n2){
        vector<int> v;
        int j=0,i=0;
        while(i<n1.size()&&j<n2.size()){
            if(n1[i]<n2[j])
                v.push_back(n1[i++]);
            else
                v.push_back(n2[j++]);
        }
        while(i<n1.size())
            v.push_back(n1[i++]);
        while(j<n2.size())
            v.push_back(n2[j++]);
        return v;
    }
    vector<int> sort(vector<int> &n,int s,int e){
        if(s==e) 
            return {n[s]};
        int mid = s+(e-s)/2;
        vector<int> v1 = sort(n,s,mid); 
        vector<int> v2 = sort(n,mid+1,e);
        return merge(v1,v2);
    }
    vector<int> sortArray(vector<int>& nums) {
        return sort(nums,0,nums.size()-1);
    }
};