class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int counter=0 ;
        int index =0 ;
        int i =0 ;
        for(int i=1;i<nums.size();i++){
            if(nums[i] !=nums[index]){
                counter++ ;
                index++ ;
                nums[index]=nums[i] ;
            }
        }
        return counter+1 ;
        
        
    }
};