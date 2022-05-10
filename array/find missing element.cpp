#include<bits/stdc++.h>
using namespace std ;
int main(){
    int arr[10]={3, 7,4,9,12,6,1,11,2,10};
    int max= arr[0];
    for(int i=1;i<10;i++){
        if(arr[i]>max){
            max=arr[i];
        }

    }
    int H[max+1]={0} ;
    for(int i=0;i<10;i++){
        H[arr[i]] ++ ;
    }

    for(int i=1;i<max+1;i++){
        if(H[i]==0){
            cout<<i<<" " ;
        }
    }



}