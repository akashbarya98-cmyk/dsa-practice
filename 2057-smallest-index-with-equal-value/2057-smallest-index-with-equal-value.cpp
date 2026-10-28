class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int r;
      for(int i=0; i<nums.size(); i++){
        if(i>=10){
           r=i%10;
           if(nums[i]==r) return i;
        }
        else if(nums[i]==i){
            return i;
        }
      }  
      return -1;
    }
};