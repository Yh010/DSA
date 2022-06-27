class Solution{
  public:
    int minJumps(int arr[], int n){
        
         if(arr[0] == 0 && n> 1) {
            return -1;
        }
        // Your code here
        int jump=0 ;
        int pos=0;
        int des=0 ;
        
        for(int i=0;i<n-1;i++){
            
            
            des=max(des,arr[i]+i);
            if(pos==i){
                pos=des ;
                jump++ ;
            }
        }
        
        if(des>=n-1){
            return jump;
        }else{
            return -1 ;
        }
    
        
    }
    
    
};