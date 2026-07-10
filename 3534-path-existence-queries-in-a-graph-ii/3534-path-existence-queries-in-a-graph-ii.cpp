class Solution {
public:
    vector<int> pathExistenceQueries(int n, vector<int>& nums, int maxDiff,
                                     vector<vector<int>>& queries) {

        vector<pair<int,int>> arr;
        arr.reserve(n);

        for(int i = 0; i < n; i++)
            arr.push_back({nums[i], i});

        sort(arr.begin(), arr.end());

        vector<int> pos(n);
        vector<int> values(n);
        vector<int> comp(n);

        for(int i = 0; i < n; i++) {
            values[i] = arr[i].first;
            pos[arr[i].second] = i;
        }

        // Components
        int id = 0;
        comp[0] = 0;
        for(int i = 1; i < n; i++) {
            if(values[i] - values[i-1] > maxDiff)
                id++;
            comp[i] = id;
        }

        // right[i]
        vector<int> right(n);
        int j = 0;
        for(int i = 0; i < n; i++) {
            while(j + 1 < n && values[j + 1] - values[i] <= maxDiff)
                j++;
            right[i] = j;
        }

        int LOG = 0;
        while((1 << LOG) <= n) LOG++;

        vector<vector<int>> up(LOG, vector<int>(n));

        up[0] = right;

        for(int k = 1; k < LOG; k++) {
            for(int i = 0; i < n; i++) {
                up[k][i] = up[k-1][ up[k-1][i] ];
            }
        }

        vector<int> ans;

        for(auto &q : queries) {
            int p1 = pos[q[0]];
            int p2 = pos[q[1]];

            if(p1 > p2) swap(p1, p2);

            if(comp[p1] != comp[p2]) {
                ans.push_back(-1);
                continue;
            }

            if(p1 == p2) {
                ans.push_back(0);
                continue;
            }

            int cur = p1;
            int steps = 0;

            for(int k = LOG - 1; k >= 0; k--) {
                if(up[k][cur] < p2) {
                    cur = up[k][cur];
                    steps += (1 << k);
                }
            }

            ans.push_back(steps + 1);
        }

        return ans;
    }
};
