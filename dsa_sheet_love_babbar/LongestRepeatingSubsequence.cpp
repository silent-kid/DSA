#include<bits/stdc++.h>
using namespace std;

int lcs(string &s1, string &s2) {
        // code here
        
        int m = s1.size();
        int n = s2.size();
        
        vector<vector<int>> t(m + 1, vector<int>(n + 1, 0));

        
        // for(int i=0;i<=m;i++){
        //     for(int j=0;j<=n;j++){
        //         t[i][j]=0;
        //     }
        // }
        
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(s1[i-1]==s2[j-1] && i!=j){
                    t[i][j] = 1 + t[i-1][j-1];
                }
                else{
                    t[i][j] = max(t[i-1][j],t[i][j-1]);
                }
            }
        }
        
        return t[m][n];
    }
  
    int LongestRepeatingSubsequence(string &s) {
        // Code here
        return lcs(s,s);
    }

int main(){
    
    return 0;
}