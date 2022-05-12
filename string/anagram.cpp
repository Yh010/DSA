#include <bits/stdc++.h>

using namespace std;


int main()
{
    char a[]="decimal" ;
    char b[]="medical" ;
    
    int arr[26]={0} ;
    for(int i=0; a[i]!='\0' ;i++){
        arr[a[i]-'a'] ++;
    }
    int i ;
    for( i=0; b[i] != '\0' ;i++){
        if(arr[b[i]-'a']==0){
            cout<<"not anagram\n" ;
            break;
        }
    }
    if(b[i]=='\0'){
        cout<<"anagram\n" ;
    }
}
