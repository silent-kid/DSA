#include<bits/stdc++.h>
using namespace std;

int lis(vector<int> &arr){
    int n = arr.size();
    vector<int> dp(n+1, 0);

    int omax =0;

    for(int i=0;i<n;i++){
        int max = 0;
        for(int j=0;j<i;j++){
            if(arr[j]<arr[i]){
                if(dp[j]> max){
                    cout<<arr[j]<<"<";
                    max = dp[j];
                }
            }
        }
        cout<<"<"<<arr[i]<<endl;
        dp[i] = max+1;

        if(dp[i]> omax){
            omax = dp[i];
        }
    }

    return omax;
}

int main(){
    vector<int> arr= {0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15};
    cout<<lis(arr);
    return 0;
}