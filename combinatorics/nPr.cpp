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

vector<vector<int>> dp;

void generatePermutations(int maxn, int maxr){
    dp.resize(maxn+1, vector<int>(maxr+1, 0));
    f(i, 0, maxn+1){
        dp[i][0] = 1;
    }
    f(n, 1, maxn+1){
        f(r, 1, maxr+1){
            dp[n][r] = dp[n-1][r] + r * dp[n-1][r-1];
            dp[n][r] %= mod;
        }
    }
}

int permutation(int n, int r){
    return dp[n][r];
}

void solve() {
    int n, r;
    cin >> n >> r;
    cout << permutation(n, r) << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    generatePermutations(1000, 1000);
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