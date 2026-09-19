class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string,vector<string>> hashmap;
        int n=strs.size();
        for(int i=0;i<n;i++){
            string sst=strs[i];
            string key=sst;
            sort(key.begin(),key.end());
            hashmap[key].push_back(sst);
        }
        for(auto it : hashmap){
            res.push_back(it.second);
        }
        return res;
    }
};