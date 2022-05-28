int solve(string s) {
    int a_right = count(s.begin(), s.end(), 'A');//total A in string assumed to be after all B's
    int b_left = 0 ;//assuming no B before A's
    
    int result = a_right ;//assuming worst case of maximum A being at right of the current index

    for(int i=0; i<s.size();i++){
        if(s[i]=='A'){
            a_right -- ;
        }else{
            b_left ++ ;
        }

        result= min(result, a_right+ b_left) ;
    } 
    return result ;

}