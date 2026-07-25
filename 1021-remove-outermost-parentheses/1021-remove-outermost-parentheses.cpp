class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int freq=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
            {
                if(freq>0) ans+=s[i];
            freq++;
            }
            else{
                freq--;
                if(freq>0) ans+=s[i];
            }

        }
        return ans;
    }
};