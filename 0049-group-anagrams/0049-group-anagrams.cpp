class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> mp;
        for(int i=0;i<strs.size();i++){
            string res=strs[i];
            string key=res;
            sort(key.begin(),key.end());
               mp[key].push_back(res);
            
        }
        for(auto i : mp){
            ans.push_back(i.second);
        }
        return ans;
    }

};