class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> passengers(1001, 0);

        for (auto &trip : trips) {
            int num = trip[0];
            int from = trip[1];
            int to = trip[2];

            passengers[from] += num;
            passengers[to] -= num;
        }

        int current = 0;

        for (int i = 0; i <= 1000; i++) {
            current += passengers[i];

            if (current > capacity) {
                return false;
            }
        }

        return true;
    }
};