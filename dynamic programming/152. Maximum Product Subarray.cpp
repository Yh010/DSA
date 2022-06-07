class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size() ==0){
            return 0 ;
        }
        
        int mxprod =nums[0] ;
        int mx_temp =nums[0] ;
        int mn_temp = nums[0] ;
        for(int i=1;i<nums.size();i++){
            int a=nums[i]*mx_temp ;
            int b=nums[i]*mn_temp ;
            mx_temp=max(max(a,b),nums[i]);
            mn_temp=min(min(a,b),nums[i]) ;
            mxprod=max(mx_temp,mxprod) ;
        }
        
        return mxprod ;
        
    }
};