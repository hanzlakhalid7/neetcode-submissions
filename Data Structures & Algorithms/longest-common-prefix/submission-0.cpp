class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string a=strs[0];
        int j,k=a.length();
        for (int i=1;i<strs.size();i++){
            for(j=0;j<min(a.length(),strs[i].length());j++)
                if(strs[i][j]!=a[j])
                    break;
            if(j<k)
                k=j;
        }
        return a.substr(0,k);
    }
};