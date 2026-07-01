class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.size();
        int capital=0;
        for(int i=0;i<n;i++){
            if(isupper(word[i])){
                capital++;
            }
        } 
        if(capital==0 || capital==n ){
            return true;
        }  
        if(capital==1 && isupper(word[0])) return true;   
        else return false;
    }
};