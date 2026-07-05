class Solution {
public:
    int secondHighest(string s) {
        int max_elt=-1, sec_max=-1;
        int res;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                res=s[i]-'0';
                if(res>max_elt){
                    sec_max=max_elt;
                    max_elt=res;
                }
                else if(res>sec_max && res!=max_elt){
                    sec_max=res;
                }
            }
        }
        return sec_max;
    }
};