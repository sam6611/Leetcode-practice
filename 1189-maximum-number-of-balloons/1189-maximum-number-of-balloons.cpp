class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> freq;
        for(char ss : text){
            if(ss=='b' || ss=='a' || ss=='l' || ss=='o' ||ss=='n'){
                freq[ss]++;
            }
        }
        int b=freq['b'];
        int a=freq['a'];
        int l=freq['l']/2;
        int o=freq['o']/2;
        int n=freq['n'];

        return min({b,a,l,o,n});
    }
};