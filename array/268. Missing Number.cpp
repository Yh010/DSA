class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int x=0;
        int n=nums.size();
        int i=0;
        while(i<n){
            if(x!=nums[i]){
                return x;
            }
            x++;
            i++ ;
        }
        
        if(nums[n-1]!=n){
            return n ;
        }
        return true ;
    }
};