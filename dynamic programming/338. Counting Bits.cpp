class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v(n+1) ;
      //  v.push_back(0) ;
        v[0]=0 ;
        for(int i=1;i<n+1;i++){
            v[i]=v[i/2] + i%2 ;
        }
        
        return v;
    }
};