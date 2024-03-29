class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int start=0; int end= letters.size()-1 ;
        
        while(start<=end){
            int mid= start+ (end-start)/2 ;
            
             if(letters[mid] > target){
                end= mid-1;
                
            }else {
                start= mid+1;
                
            }
        }
        if(start==letters.size()){
            return letters[0] ;
        }else{
            return letters[start] ;
        }
        
        
    }
};