vector<int> solve(vector<vector<int>>& relations) {
    set<int> ans ; //for storing numbers with reverse relation
    vector<int> temp ; // for final ans
    set<pair<int ,int>> s; // for storing relation array
    for(int i=0;i<relations.size();i++){
        s.insert({relations[i][0] , relations[i][1]});
    }
    for(auto x:s){
        if(s.find({x.second,x.first}) !=s.end()){
            ans.insert(x.second);
            ans.insert(x.first) ;
        }
    }

    for(auto x:ans){
        temp.push_back(x) ;
    }
    return temp ;

    
}