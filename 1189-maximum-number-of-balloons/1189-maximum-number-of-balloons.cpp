class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> mp;
        int nn=text.size();
        for(int i=0;i<nn;i++){
                mp[text[i]]++;
            
        }
            int b=mp['b'];
            int a=mp['a'];
            int l=mp['l']/2;
            int o=mp['o']/2;
            int n=mp['n'];
        return min({b,a,l,o,n});
    }
};