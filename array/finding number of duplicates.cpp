#include <bits/stdc++.h>


using namespace std;

int main()
{
   int arr[10]={3,6,8,8,10,12,15,15,15,20};
   int max=arr[0];
   for(int i=1;i<10;i++){
       if(arr[i]>max){
           max=arr[i];
       }
   }
   int h[max+1]={0};
   for(int i=0;i<10;i++){
       h[arr[i]]++ ;
   }
   for(int i=0;i<max+1;i++){
       cout<<h[i]<<" ";
   }
   
}
