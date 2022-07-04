class Solution {
    public String longestCommonPrefix(String[] strs) {
        if(strs.length==0){
            return "" ;
        }
        
        String prefix =strs[0];
        for(int i=1;i<strs.length;i++){
            //bool found = strs[i].find(prefix) != std::string::npos;
            while(strs[i].indexOf(prefix)!=0){
               prefix=prefix.substring(0,prefix.length()-1);
                // prefix= prefix.resize(prefix.size()-1);
            }
        }
        return prefix;
    }
}