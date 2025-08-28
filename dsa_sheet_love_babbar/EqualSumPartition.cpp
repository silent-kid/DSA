#include<bits/stdc++.h>
using namespace std;

bool equalPartition(vector<int>& arr) {
        // code here
        int temp_sum = 0;
        for(int i=0;i<arr.size();i++){
            temp_sum += arr[i];
        }
        
        if(temp_sum%2!=0) return false;
        
        int sum = temp_sum/2;
        
        int n = arr.size();
        
        vector<vector<bool>> t(n+1, vector<bool>(sum+1,false));
        
        for(int i=0;i<=n;i++){
            t[i][0]=true;
        }
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                if(arr[i-1]<=j){
                    t[i][j]= t[i-1][j] || t[i-1][j-arr[i-1]];
                }
                else{
                    t[i][j] = t[i-1][j];
                }
            }
        }
        
        return t[n][sum];
    }

int main(){
    
    return 0;
}