class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=99999 ;
        int maxprof=0 ;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min){
                min=prices[i] ;
            }else if(prices[i]-min>maxprof){
                maxprof=prices[i]-min ;
            }
        }
        return maxprof ;
    }
};