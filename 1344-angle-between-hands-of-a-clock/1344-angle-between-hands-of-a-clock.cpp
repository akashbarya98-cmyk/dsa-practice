class Solution {
public:
    double angleClock(int hour, int minutes) {
     double ans=abs((30*hour)-((11/2.0)*minutes));
     if(ans>180){
        return 360-ans;
     } 
     else 
     return ans; 
    }
};