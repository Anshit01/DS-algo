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

int lcs(string& s1, string& s2){
    int x = s1.size();
    int y = s2.size();
    vector<vector<int>> dp(x+1, vector<int>(y+1, 0));
    for(int i = 1; i <= x; i++){
        for(int j = 1; j <= y; j++){
            int a = 0;
            if(s1[i-1] == s2[j-1]) a = 1;
            dp[i][j] = max(dp[i-1][j-1] + a, max(dp[i-1][j], dp[i][j-1]));
        }
    }
    return dp[x][y];
}

void solve() {
    string s1, s2;
    cin >> s1 >> s2;
    cout << lcs(s1, s2) << endl;
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