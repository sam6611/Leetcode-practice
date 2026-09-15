class Solution {
    public int matchPlayersAndTrainers(int[] players, int[] trainers) {
        int n=players.length;
        int m=trainers.length;
        Arrays.sort(players);
        Arrays.sort(trainers);
        int left=0;int right=0;
        int count=0;
        while(left<n && right<m){
            if(players[left]<=trainers[right]){
                left++;
                right++;
                count++;
            }
            else{
                right++;
            }

        }
        return count;
    }
}