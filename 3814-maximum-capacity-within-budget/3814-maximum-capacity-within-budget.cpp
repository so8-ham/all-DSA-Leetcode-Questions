class Solution {
public:
    int maxCapacity(vector<int>& costs, vector<int>& capacity, int budget) {
        int n = costs.size();

        vector<pair<int, int>> machines;
        for (int i = 0; i < n; i++) {
            machines.push_back({costs[i], capacity[i]});
        }

        sort(machines.begin(), machines.end());

        vector<int> prefixMax(n);
        prefixMax[0] = machines[0].second;

        for (int i = 1; i < n; i++) {
            prefixMax[i] = max(prefixMax[i - 1], machines[i].second);
        }

        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (machines[i].first < budget) {
                ans = max(ans, machines[i].second);
            }

            int remaining = budget - machines[i].first - 1;

            if (remaining <= 0) continue;

            int left = 0, right = i - 1;
            int best = -1;

            while (left <= right) {
                int mid = left + (right - left) / 2;

                if (machines[mid].first <= remaining) {
                    best = mid;
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }

            if (best != -1) {
                ans = max(ans, machines[i].second + prefixMax[best]);
            }
        }

        return ans;
    }
};