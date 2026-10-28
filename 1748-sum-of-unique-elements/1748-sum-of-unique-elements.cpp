class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int s=0;
      map<int,int>mp;
      for(auto i:nums)
      mp[i]++;

      for(auto [k,v]:mp){
        if(v==1) s+=k;
      }
      return s;
    }
};