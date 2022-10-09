#include<bits/stdc++.h>
using namespace std;


void zigZag(int arr[], int n) {
	    // code here
	    bool flag = true;
	    
	    for(int i = 0; i < n-1; i++){
	        if(flag){
	            
	            if(arr[i] > arr[i+1]){
	                swap(arr[i],arr[i+1]);
	            }
	        }
	        else{
	            if(arr[i] < arr[i+1]){
	                swap(arr[i],arr[i+1]);
	            }
	        }
	        
	        flag = !flag;
	    }
	}

    int main(){
    int n = 7;
    int arr[n] = {4,3,7,8,6,2,1};
    zigZag(arr,n);
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}