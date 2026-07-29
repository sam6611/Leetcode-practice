class Solution {
public:
    long long LIMIT;

    long long comb(int n, int r) {
        if (r > n) return 0;
        r = min(r, n - r);

        long long ans = 1;

        for (int i = 1; i <= r; i++) {
            ans = ans * (n - r + i) / i;
            if (ans > LIMIT) return LIMIT;
        }

        return min(ans, LIMIT);
    }

    long long countWays(vector<int>& freq) {
        int total = 0;

        for (int x : freq)
            total += x;

        long long ans = 1;

        int rem = total;

        for (int x : freq) {
            if (x == 0) continue;

            ans *= comb(rem, x);

            if (ans > LIMIT)
                ans = LIMIT;

            rem -= x;
        }

        return min(ans, LIMIT);
    }

    string smallestPalindrome(string s, int k) {
        LIMIT = k;

        vector<int> freq(26);

        for (char c : s)
            freq[c - 'a']++;

        vector<int> half(26);

        string mid = "";

        for (int i = 0; i < 26; i++) {
            half[i] = freq[i] / 2;

            if (freq[i] % 2)
                mid.push_back(char(i + 'a'));
        }

        if (countWays(half) < k)
            return "";

        int len = s.size() / 2;

        string left = "";

        for (int pos = 0; pos < len; pos++) {

            for (int c = 0; c < 26; c++) {

                if (half[c] == 0)
                    continue;

                half[c]--;

                long long cnt = countWays(half);

                if (cnt >= k) {
                    left.push_back(char(c + 'a'));
                    break;
                }

                k -= cnt;
                half[c]++;
            }
        }

        string right = left;
        reverse(right.begin(), right.end());

        return left + mid + right;
    }
};