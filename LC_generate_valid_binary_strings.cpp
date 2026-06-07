class Solution {
public:
    vector<string> generateValidStrings(int n, int k) {
        vector<string> ans;

        int total = 1 << n;

        for (int mask = 0; mask < total; mask++) {

            string s = "";

            for (int i = n - 1; i >= 0; i--) {
                if (mask & (1 << i))
                    s += '1';
                else
                    s += '0';
            }

            bool consecutive = false;
            int cost = 0;

            for (int i = 0; i < n; i++) {

                if (i > 0 && s[i] == '1' && s[i - 1] == '1') {
                    consecutive = true;
                    break;
                }

                if (s[i] == '1')
                    cost += i;
            }

            if (!consecutive && cost <= k) {
                ans.push_back(s);
            }
        }

        return ans;
    }
};
