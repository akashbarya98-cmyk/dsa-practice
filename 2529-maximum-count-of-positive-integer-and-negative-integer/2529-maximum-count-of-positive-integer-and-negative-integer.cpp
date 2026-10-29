class Solution {
public:
    int maximumCount(vector<int>& nums) {
       int c=0, s=0;
       for(int i=0; i<nums.size(); i++){
        if(nums[i]<0){
            c++;
        }
        else if(nums[i]>0) s++;

        else continue;
       } 
      
       return max(s,c);
    }
};