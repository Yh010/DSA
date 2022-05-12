#include <bits/stdc++.h>

using namespace std;

int main()
{
    char h[]="data Structure Algorithms" ;
    int vcount=0,ccount=0,wcount=1 ;
    for(int i=0;h[i] !='\0';i++){
        if(h[i]=='a' || h[i]=='e' ||h[i]=='i'||h[i]=='o'||h[i]=='u' || h[i]=='A' || h[i]=='E' ||h[i]=='I'||h[i]=='O'||h[i]=='U'){
            vcount++ ;
        }else if(('A' <= h[i] <= 'Z') || ('a' <= h[i] <= 'z')){
            ccount++ ;
        }
        
    }
    
    for(int i=1; h[i] !='\0' ; i++){
        if(h[i] == ' ' && h[i-1] != ' '){
            wcount++ ;
        }
    }
    cout<<ccount <<" "<<vcount<<" "<<wcount;
    
}