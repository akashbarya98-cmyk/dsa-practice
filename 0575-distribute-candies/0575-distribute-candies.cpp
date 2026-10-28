class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> s(candyType.begin(), candyType.end());
        int n = candyType.size() / 2;
        cout<<s.size();
        return min((int)s.size(), n);
    }
};