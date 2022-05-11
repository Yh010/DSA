#include <bits/stdc++.h>

using namespace std;

int main()
{
    char a[]="datastructure" ;
    for(int i=0; a[i] != '\0' ;i++){
        a[i] -= 32 ;
    }
    
    cout<< a ;
}