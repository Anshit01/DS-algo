/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define int long long
#define f(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define inputArray(arr) f(i, 0, arr.size()) cin >> arr[i]
#define printArray(arr) f(i, 0, arr.size()) cout << arr[i] << ' '; cout << endl
#define endl '\n'
typedef long long ll;
const int mod = 1e9+7;
using namespace std;

bool knapsack(int W, vector<int>& wt, vector<int>& val, int n){
    vector<vector<int>> dp(n+1, vector<int>(W +1, 0));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= W; j++){
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            if(j >= wt[i-1]){
                dp[i][j] = max(dp[i][j], dp[i-1][j-wt[i-1]] + val[i-1]);
            }
        }
    }
    return dp[n][W];
}

void solve() {
    int n;
    cin >> n;
    
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while(T--){
        solve();
        // if(solve())
        // 	cout << "YES" << endl;
        // else
        // 	cout << "NO" << endl;
    }
    return 0;
}