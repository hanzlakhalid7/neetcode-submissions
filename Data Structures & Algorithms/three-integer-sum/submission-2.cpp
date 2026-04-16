class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& n) {
        vector<vector<int>> v;
        sort(n.begin(),n.end());
        for(int i=0;i<n.size();i++){
            if(i>0 && n[i]==n[i-1])
                continue;
            int j=i+1,k=n.size()-1;
            while(j<k){
                int sum=n[i]+n[j]+n[k];
                if(sum>0)
                    k--;
                else if(sum<0)
                    j++;
                else{
                    v.push_back({n[i],n[j],n[k]});
                    while(j<k && n[j]==n[j+1])j++;
                    while(j<k && n[k-1]==n[k])k--;
                    j++;
                    k--;
                }
            }
        }
        return v;
    }
};
