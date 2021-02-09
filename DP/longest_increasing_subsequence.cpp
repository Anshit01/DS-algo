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

// O(n^2) solution (DP based)
int lisDP(vector<int>& arr){
    int ans = 0;
    int n = arr.size();
    vector<int> dp(n, 0);
    for(int i = 0; i < n; i++){
        int m = 0;
        for(int j = 0; j < i; j++){
            if(arr[j] < arr[i]){
                m = max(m, dp[j]);
            }
        }
        dp[i] = m + 1;
        ans = max(ans, dp[i]);
    }
    return ans;
}

// O(n) solution
int lis(vector<int>& arr){
    int n = arr.size();
    vector<int> sub;
    sub.push_back(arr[0]);
    for(int i = 1; i < n; i++){
        if(arr[i] > sub.back()){
            sub.push_back(arr[i]);
        }else{
            auto it = lower_bound(sub.begin(), sub.end(), arr[i]);
            *it = arr[i];
        }
    }
    return sub.size();
}

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    inputArray(arr);
    cout << lis(arr) << endl;
    cout << lisDP(arr) << endl;
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