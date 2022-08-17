#include<bits/stdc++.h>
using namespace std ;

int ans(arr,target){
    int start=0 ;
    int end =1 ;
    while(arr[end]<target){
        int temp =end +1 ;
        end= end + (end-start)*2 ;
        start = temp;
    }
}

int binary search(arr,target,start,end){
    while(start<=end){
        int mid= start + (end-start)/2 ;

    if(arr[mid]==target){
        return mid ;
    }
   
    else if(arr[mid] >target){
        end=mid-1 ;

    }else{
        start = mid+1 ;
    }
    }
}

int main(){
 
}