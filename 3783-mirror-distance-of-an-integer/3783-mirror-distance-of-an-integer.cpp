class Solution {
public:
    int mirrorDistance(int n) {
       int t=0;
       int temp=n;
       while(n>0){
        int r=n%10;
        n/=10;
        t=t*10+r;

       } 
       return abs(temp-t);
    }
};