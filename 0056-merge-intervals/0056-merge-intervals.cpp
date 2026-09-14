class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end(), [](vector<int>&a , vector<int>&b) {return a[0]<b[0];});
        int start=intervals[0][0];
        int end=intervals[0][1];
        vector<vector<int>> store;
        for(int i=1;i<n;i++){
            int first=intervals[i][0];
            int sec=intervals[i][1];
            if(first<=end){
                end=max(sec,end);
            }
            else{
                store.push_back({start,end});
                start=first;
                end=sec;
            }
        }
        store.push_back({start, end});
            return store;
    }
};