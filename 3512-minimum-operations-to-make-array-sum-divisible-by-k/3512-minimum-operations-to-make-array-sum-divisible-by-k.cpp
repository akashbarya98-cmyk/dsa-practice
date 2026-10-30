class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
       int s=0;
       int c=0;
       for(int i=0; i<nums.size(); i++){
        s+=nums[i];
       } 
       while(s%k!=0){
        s-=1;
        c++;
       }
       return c;
    }
};