#include <bits/stdc++.h>

using namespace std;

int main()
{
    char a[]="datastructure" ;
    for(int i=0; a[i] != '\0' ;i++){
        a[i] -= 32 ;
    }
    
   cout<< a <<"\n";
    
    //upper to lower -lower to upper
    char b[]="DaTaStRuCt" ;
    for(int i=0; b[i] !='\0' ;i++){
        if(b[i] >= 'A' && b[i] <= 'Z'){
            b[i] += 32 ;
        }else if(b[i] >='a' && b[i] <= 'z'){
            b[i] -= 32 ;
        }
    }
    
    cout<<b ;
}
