class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int>v(nums);
       reverse(nums.begin(), nums.end());
       for(int i=0; i<nums.size(); i++){
        v.push_back(nums[i]);
       }
        
        return v;
    }
};