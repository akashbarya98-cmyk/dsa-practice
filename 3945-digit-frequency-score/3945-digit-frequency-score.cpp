class Solution {
public:
    int digitFrequencyScore(int n) {
        string s=to_string(n);
        vector<int>v(10);
        for(auto i:s){
            v[i-'0']++;

        }
       int ans=0;
        for(int i=0; i<10; i++){
            ans+=v[i]*i;
        }
        return ans;

    }
};