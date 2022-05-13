class Solution {
public:
    void sortColors(vector<int>& nums) {
       /* int arr[4]={0} ;
        for(int i=0;i< nums.size();i++){
            arr[nums[i]] ++ ;
        }
         cout<<"[" ;
        for(int i =0;i<4;i++){
            
            while(arr[i] !=0){
                //return i ;
               
                if(arr[3]!=1){
                     cout<<i<<"," ;
                arr[i] -- ;
                }
               else if(arr[3]==1){
                   cout<<i<<"]" ;
                   arr[i]-- ;
               }
            }
        }*/
        if(nums.size()==0 || nums.size()==1){
            return ;
        }
        int start =0 ;
        int end =nums.size()-1 ;
        int index =0 ;
        while( start < end && index <=end){
            if(nums[index]==0){
                nums[index]=nums[start] ;
                nums[start]=0 ;
                start++ ;
                index++ ;   
            }
            else if(nums[index]==2){
                nums[index]=nums[end] ;
                nums[end]=2;
                end-- ;
            }else {
                index++ ;
            }
            
        }
    }
};