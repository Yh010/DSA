class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s ="";
        int remainder=0 ;
        while(columnNumber){
            remainder=columnNumber%26 ;
            if(remainder==0){
                remainder=26;
            }
            char a = 64 + remainder ;
            s +=a ;
            columnNumber=(columnNumber-remainder)/26 ;
            
        }
         reverse(s.begin(), s.end()); 
        return s ;
    }
};