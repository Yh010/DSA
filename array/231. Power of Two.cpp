class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long t =1 ;
        long long c =n-t ;
        
        while(c>0){
             c= n-t;
            
            t *=2 ;
        }
        
        
        if(c==0){
            return true ;
        }else{
            return false;
        }
        
        
    }
};