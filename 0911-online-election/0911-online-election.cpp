class TopVotedCandidate {
public:
    vector<int> times;
    vector<int> leaders;

    TopVotedCandidate(vector<int>& persons, vector<int>& times) {
        this->times = times;

        unordered_map<int, int> count;
        int maxVotes = 0;
        int leader = -1;

        for (int i = 0; i < persons.size(); i++) {
            count[persons[i]]++;

            if (count[persons[i]] >= maxVotes) {
                maxVotes = count[persons[i]];
                leader = persons[i];
            }

            leaders.push_back(leader);
        }
    }

    int q(int t) {
        int idx = upper_bound(times.begin(), times.end(), t)
                  - times.begin() - 1;

        return leaders[idx];
    }
};