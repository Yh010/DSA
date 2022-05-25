anagram q


    #include <bits/stc++.h>

using namespace std;

int main()
{   
    for(int i=1;i<words.size();i++){
        
    }
    
    
    
    
    
    int x=0 ;
    
    char a[] = words[i] ;
    char b[] = words[i-1] ;
    
    int arr[26]={0} ;
    for(int j=0; a[j]!='\0' ;j++){
        arr[a[j]-'a'] ++;
    }
    int k ;
    for( k=0; b[k] != '\0' ;k++){
        if(arr[b[k]-'a']==0){
            /*cout<<"not anagram\n" ;
            break;*/
            x= 0 ;
        }
    }
    if(b[k]=='\0'){
        //cout<<"anagram\n" ;
       x= 1 ;
    }
}



other q

#include <bits/stdc++.h>

using namespace std;

int main()
{
     
    int bottom = 2, top = 9; int special[2] = {4,6} ;
    int arr[top+1]={0} ;
    
    
   //int x= special[0] ;
   //cout<<x<<"\n" ;
   int n= 2 ;
   sort(special,special + 2) ;
   
    for(int i=special[0] ;i<special[1];i++){
       /* cout<<i<<"\n" ;
        cout<<"bv" ;*/
        arr[special[i]] ++ ;
    }
    
    
    for(int i=0 ; i< top+1 ; i++){
        cout<< arr[i] <<" " ;
    }
    cout<<"\n" ;
    //vector<int> zerocount ;
    int count=0 ;
    int maxcount=0 ;
    
    for(int i= bottom ; i< top ; i++){
        if(arr[i]==0){
            count++ ;
        }
        if(arr[i]==1){
            count=0;
        }
        
        if(count>maxcount){
            maxcount=count ;
        }
    }
    
    
    cout<<maxcount<<" " ;
}
