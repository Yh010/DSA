class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       int start=0,i=1,c=0;
        int currsum=nums[start];
        for(;i<nums.size();i++){
            while(currsum<k && i<nums.size()){
                currsum += nums[i] ;
                
                //i++ ;   
            }
            if(currsum==k){
                c++ ;
                currsum -= nums[start] ;
                start++ ;
                
                
            }
            while(currsum>k){
                currsum -= nums[start] ;
                start++ ;         
            }
        }
        return c ;
        
        /*//nums.size=3,k=2 
        //st=0,i=0,c=0,currs=0*/
       /* int i=0,j=0,c=0,currsum=nums[j] ;
        while(j<nums.size()){
            j++ ;
            if(j==nums.size()){
                j-- ;
                currsum-=nums[j] ;
            }
            currsum+=nums[j] ;
            if(currsum==k){
                c++ ;
                 currsum -=nums[i] ;
                i++ ;
               
            }
            if(currsum>k){
                currsum -=nums[i] ;
                i++;  
            }
        }
        
        
        return c ;*/
    }
};