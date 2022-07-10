class Solution {
public:
    bool isPalindrome(int x) {
        int z=0;
        int temp=x;
        while(temp){
            z++;
            temp/=10 ;
        }
        
         if(x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        
        int reverse=0; ;
        while(x>reverse){
            reverse=reverse*10+x%10 ; 
            x/=10 ;
        }
        
       /* if(z%2==1){
            reverse/=10 ;
        }
        if(reverse==x){
            return false;
        }else{
            return true ;
        }*/
         return x == reverse || x == reverse/10;
        
    }
};