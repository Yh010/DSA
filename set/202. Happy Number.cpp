class Solution {
public:
    bool isHappy(int n) {
        set<int> s ;
        while(1){
            int val=0;
            while(n){
                int index= n%10 ;
                val+= index*index ;
                n/=10;
                
            }
            if(val==1){
                return true;
            }
            if(s.find(val)!=s.end()){
                return false ;
            }
            s.insert(val);
            n=val ;
            
                
        }
        
        
    }
};