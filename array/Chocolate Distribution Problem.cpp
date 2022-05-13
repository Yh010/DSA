#include <bits/stdc++.h>

using namespace std;

int main()
{
    int prices[]={3, 4, 1, 9, 56, 7, 9, 12};
    sort(prices, prices+ 8) ;
    int i=0 ;
    int m=5 ;
    int min_diff= INT_MAX ;
    
    int j=i+m -1 ;
    for(int i=0; j <8; i++){
        int diff = prices[i + m - 1] - prices[i];
        if (diff < min_diff)
            min_diff = diff;
    }
    
    cout<<min_diff ;
    
    }