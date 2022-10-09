#include<bits/stdc++.h>
using namespace std;

int minJumps(int arr[], int n){
        // Your code here
        if(arr[0] == 0){
            if(n == 1)
                return 0;
            else
                return -1;
        }
        int minijump = 0;
        int intervalend = 0;
        int nextlevel = 0;
        int l = 0;
        int r = 0;
        
       for(int i = 0; i < n; i++){
           nextlevel = max(nextlevel, i + arr[i]);
           
           if(i == intervalend ){
               intervalend = nextlevel;
               minijump++;
               
               if(intervalend >= n-1)
                    break;
           }
           
           
       }
       
       if(intervalend >= n-1)
            return minijump;
        else
            return -1;
        
            
    }

int main(){
    int n = 11;
    int arr[n] = {1,3,5,8,9,2,6,7,6,8,9};
    cout<<"ans :"<<minJumps(arr,n)<<endl;
    return 0;
}