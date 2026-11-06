class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs, int x, vector<int>& queries) {
        int m = queries.size();

        sort(logs.begin(), logs.end(), [](const auto& a, const auto& b) {
            return a[1] < b[1];
        });

        vector<int> order(m);
        iota(order.begin(), order.end(), 0);

        sort(order.begin(), order.end(), [&](int a, int b) {
            return queries[a] < queries[b];
        });

        vector<int> cnt(n + 1, 0);
        vector<int> ans(m);

        int busy = 0;
        int lo = 0, hi = 0;

        for (int i : order) {
            int q = queries[i];

            while (hi < logs.size() && logs[hi][1] <= q) {
                int id = logs[hi][0];

                if (cnt[id] == 0) {
                    busy++;
                }

                cnt[id]++;
                hi++;
            }

            while (lo < hi && logs[lo][1] < q - x) {
                int id = logs[lo][0];

                cnt[id]--;

                if (cnt[id] == 0) {
                    busy--;
                }

                lo++;
            }

            ans[i] = n - busy;
        }

        return ans;
    }
};