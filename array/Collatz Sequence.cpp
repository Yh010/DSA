int solve(int n) {
    vector<int> v;
    while(n!=1){
    
    if(n%2==0){
        n=n/2;
    }else{
        n = 3 * n + 1 ;
    }
    v.push_back(n) ;
    }

    int x=v.size()+1 ;
    return x ;
   

}