class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>mp;
        int s=0;
        for(auto i:stones){
            mp[i]++;
        }
        for(auto k:jewels){
            s+=mp[k];
        }
        return s;
    }
};