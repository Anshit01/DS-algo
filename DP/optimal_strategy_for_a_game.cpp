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

int maximumAmount(vector<int>& arr){
    int n = arr.size();
    vector<vector<pair<int, int>>> dp(n, vector<pair<int, int>>(n));
    for(int i = 0; i < n; i++){
        dp[i][i] = {arr[i], 0};
    }
    for(int i = 1; i < n; i++){
        for(int j = 0; j < n-i; j++){
            int l = dp[j][i+j-1].second + arr[i+j];
            int d = dp[j+1][i+j].second + arr[j];
            if(l > d){
                dp[j][i+j].first = l;
                dp[j][i+j].second = dp[j][i+j-1].first;
            }else{
                dp[j][i+j].first = d;
                dp[j][i+j].second = dp[j+1][i+j].first;
            }
        }
    }
    return dp[0][n-1].first;
}

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    inputArray(arr);
    cout << maximumAmount(arr) << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    while(T--){
        solve();
        // if(solve())
        // 	cout << "YES" << endl;
        // else
        // 	cout << "NO" << endl;
    }
    return 0;
}