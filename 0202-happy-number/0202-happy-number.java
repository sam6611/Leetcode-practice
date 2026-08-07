class Solution {
    public int sumofsquare(int n){
        int sum=0;
        while(n>0){
            int digit=n%10;
            sum=digit*digit+sum;
            n=n/10;
        }
        return sum;
    }
    public boolean isHappy(int n) {
        int slow=n;
        int fast=n;
        slow=sumofsquare(slow);
        fast=sumofsquare(sumofsquare(fast));
        while(slow!=fast){
            slow=sumofsquare(slow);
            fast=sumofsquare(sumofsquare(fast));
        }
        return slow==1? true : false;

    }
}