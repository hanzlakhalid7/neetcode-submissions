class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& n, int target) {
        vector<vector<int>> v;
        sort(n.begin(),n.end());
        for(int i=0;i<n.size()-3;i++){
            if(i>0 && n[i]==n[i-1])
                continue;
            for(int j=i+1;j<n.size()-2;j++){
                if(j>i+1 && n[j]==n[j-1])
                    continue;
                int k=j+1,l=n.size()-1;
                while(k<l){
                    long long sum =(long long)n[i]+n[j]+n[k]+n[l];
                    if(sum>target)
                        l--;
                    else if (sum<target)
                        k++;
                    else {
                        v.push_back({n[i],n[j],n[k],n[l]});
                        while(k<l && n[k]==n[k+1])k++;
                        while(k<l && n[l-1]==n[l])l--;
                        k++;
                        l--;
                    }
                }
            }
        }
        return v;
    }
};