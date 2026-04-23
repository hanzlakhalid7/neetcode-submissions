class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="*" && tokens[i]!="/"){
                int n=stoi(tokens[i]);
                s.push(n);
            }
            else{
                int b=s.top();
                s.pop();
                int a=s.top();
                s.pop();
                int sol;
                if(tokens[i]=="+")
                    sol=a+b;
                else if(tokens[i]=="-")
                    sol=a-b;
                else if(tokens[i]=="*")
                    sol=a*b;
                else if(tokens[i]=="/")
                    sol=a/b;
                s.push(sol);
            }
        }
        return s.top();
    }
};
