class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        int n=strs.size();
        for(int i=0;i<n;i++){
            string str=strs[i];
            string key=str;
            sort(key.begin(),key.end());
            mp[key].push_back(str);
        }
        vector<vector<string>> res;
        for(auto it : mp){
            res.push_back(it.second);
        }
        return res;
    }
};