#include<bits/stdc++.h>
using namespace std;

int t[1001][1001]; // memo table
    
    int matrixMultiplication(vector<int> &arr) {
        int i = 1;
        int j = arr.size() - 1;
        memset(t, -1, sizeof(t));
        return solve(arr, i, j);
    }
    
    int solve(vector<int> &arr, int i, int j) {
        if(i >= j) return 0;   // base case
        
        if(t[i][j] != -1) return t[i][j];
        
        int mn = INT_MAX;
        for(int k = i; k < j; k++) {
            int temp_ans = solve(arr, i, k) 
                         + solve(arr, k+1, j) 
                         + (arr[i-1] * arr[k] * arr[j]);
            
            mn = min(mn, temp_ans);
        }
        
        return t[i][j] = mn;
    }

int main(){
    
    return 0;
}