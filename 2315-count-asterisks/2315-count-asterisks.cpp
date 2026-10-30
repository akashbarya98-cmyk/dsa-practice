class Solution {
public:
    int countAsterisks(string s) {
        int c=0;
        int m=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='|'){ 
                c++;
            }
            else if(c%2==0 && s[i]=='*')
            m++;
        }
        return m;
    }
};