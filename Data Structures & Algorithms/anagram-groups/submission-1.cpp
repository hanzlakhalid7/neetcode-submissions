class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> a;
        for(int i=0;i<strs.size();i++){
            vector<int> x(26,0);
            for(char &c:strs[i])
                x[c-'a']++;
            string k = to_string(x[0]);
            for(int l=1;l<26;l++)
                k+=','+to_string(x[l]);
            a[k].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto &n : a){
            ans.push_back(n.second);
        }
        return ans;
    }
};
