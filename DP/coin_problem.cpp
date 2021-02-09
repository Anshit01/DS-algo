/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define int long long
#define f(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define what_is(x) cerr << #x << " is " << x << endl
#define dbg(x) cerr << x << endl
#define dbg2(x, y) cerr << x << ' ' << y << endl
#define dbg3(x, y, z) cerr << x << ' ' << y << ' ' << z << endl
#define inputArray(arr) f(i, 0, arr.size()) cin >> arr[i]
#define printArray(arr) f(i, 0, arr.size()) cout << arr[i] << ' '; cout << endl
#define mod 1000000007
#define endl '\n'
using namespace std;

vector<int> countCoins(const vector<int>& coins, int n){
    vector<int> dp(n+1, INT32_MAX);
    dp[0] = 0;
    f(i, 1, n+1){
        for(int c : coins){
            if(i >= c){
                dp[i] = min(dp[i], dp[i-c] + 1);
            }
        }
    }
    if(dp[n] == INT32_MAX) return {};
    vector<int> ans;
    int i = n;
    int cnt = dp[n];
    while(cnt > 0){
        for(int c : coins){
            if(i-c >= 0 && dp[i] == dp[i-c] + 1){
                ans.push_back(c);
                i -= c;
                cnt--;
            }
        }
    }
    return ans;
}

void solve() {
    int n;
    cin >> n;
    vector<int> coins(n);
    inputArray(coins);
    int q;
    cin >> q;
    f(i, 0, q){
        int a;
        cin >> a;
        auto ans = countCoins(coins, a);
        cout << ans.size() << endl;
        printArray(ans);
    }
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    while(T--){
        solve();
    }
    return 0;
}