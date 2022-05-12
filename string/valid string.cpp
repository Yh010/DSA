#include <bits/stdc++.h>

using namespace std;
int valid(char *name){
    for(int i=0;name[i] != '\0' ;i++){
        if(!(65<=name[i]<=90) && !(97<=name[i]<=122) && !(48<=name[i]<=57) ){
            return 0 ;
        }
    }
    return 1 ;
}

int main()
{
    char *name="d@?aStructureAlgorithms" ;
    if(valid(name)){
        cout<<"valid string" ;
    }else{
        cout<<"invalid string" ;
    }
    
    
}
