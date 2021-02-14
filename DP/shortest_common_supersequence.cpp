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

int shortestCommonSupersequence(string& s1, string& s2){
    int n1 = s1.size();
    int n2 = s2.size();
    vector<vector<int>> dp(n1+1, vector<int>(n2+1));
    for(int i = 0; i <= n1; i++){
        dp[i][0] = i;
    }
    for(int i = 0; i <= n2; i++){
        dp[0][i] = i;
    }
    for(int i = 1; i <= n1; i++){
        for(int j = 1; j <= n2; j++){
            dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + 1;
            if(s1[i-1] == s2[j-1]){
                dp[i][j] = min(dp[i][j], dp[i-1][j-1] + 1);
            }
        }
    }
    return dp[n1][n2];
}

void solve() {
    string s1, s2;
    cin >> s1 >> s2;
    cout << shortestCommonSupersequence(s1, s2) << endl;
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