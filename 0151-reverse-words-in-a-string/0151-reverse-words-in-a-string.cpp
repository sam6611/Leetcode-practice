class Solution {
public:
    string reverseWords(string s) {
        vector<string>words;
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                ans+=s[i];
            }
            else if(s[i]==' '){
                if(!ans.empty()){
                words.push_back(ans);
                ans="";
                }
            }
        }
        if(!ans.empty()){
            words.push_back(ans);
        }
        reverse(words.begin(),words.end());
        string res;
        for(auto x:words){
            res+=x;
            res+=" ";
        }
        res.pop_back();
        return res;
    }
};