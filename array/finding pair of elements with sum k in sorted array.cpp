
#include <bits/stdc++.h>


using namespace std;

int main()
{
   int arr[10]={1,3,4,5,6,8,9,10,12,14};
   int i=0; int j=9 ;
   int sum=10 ;
   while(i<j){
       if(arr[i]+arr[j]==sum){
           cout<<arr[i]<<" "<<arr[j]<<"\n" ;
           i++ ,j-- ;
       }
       else if(arr[i]+arr[j]>sum){
           j-- ;
       }
       else if(arr[i]+arr[j]<sum){
           i++ ;
       }
   }
   
   
}
