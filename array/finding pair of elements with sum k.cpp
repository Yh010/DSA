
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
   int sum= 10 ;
   int pairs=0;
   for(int i=0;i<10;i++){
       if(h[sum-arr[i]]>0){
           pairs++ ;
           cout<< arr[i] <<" "<< sum-arr[i] <<"\n" ;
       }
       h[arr[i]]++ ;
   }
   cout<<pairs;
   
   
}
//doubt : why 15 and -5 is getting counted 
