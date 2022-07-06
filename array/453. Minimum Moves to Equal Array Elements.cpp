class Solution {
public:
    int minMoves(vector<int>& nums) {
        
       sort(nums.begin(),nums.end());
        int smallest=nums[0];
        int sum=0;
        for(int i=nums.size()-1;i>=0;i--){
            sum += nums[i]-smallest ;
        }
        
        return sum;
        
        
        
    }
};