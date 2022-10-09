#include<bits/stdc++.h>
using namespace std;

// using prefix sum
int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        long long preSum = 0;
        // vector<long long>prefix(n);
        for(int i = 0; i < n; i++){
            preSum += a[i];
        }
        
        long long begin = 0;
        int ans = -1;
        for(int i = 0; i < n; i++){
            long long last = preSum - begin - a[i];
            if(begin == last){
                ans = i+1;
                break;
            }
            begin += a[i];
        }
        
        return ans;
        
    }

int main(){
    int n = 5;
    long long arr[n] = {1,3,5,2,2};
    cout<<"ans :"<<equilibriumPoint(arr,n)<<endl;
    return 0;
}