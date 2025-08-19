#include<iostream>
using namespace std;
#include<vector>

vector <vector<int>> dp(31, vector<int>(31, 0));



int nCr(int n, int r){
    if(n==r){
        dp[n][r] = 1;
        return 1;
    }
    if(r==1){
        dp[n][r]=n;
        return n;
    }
    if(dp[n][r]!=0){
        return dp[n][r];
    }
    else{
        dp[n][r] = nCr(n-1, r-1) + nCr(n-1, r);
        return dp[n][r];
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    dp[1][1]=1;
    dp[2][1]=2;
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        cout << nCr(m,n)<<"\n";
        
    }
    return 0;

}