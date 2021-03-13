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

ll pow(ll a, ll b, ll m){
    ll ans = 1;
    while(b){
        if(b & 1){
            ans *= a;
            ans %= m;
        }
        a *= a;
        a %= m;
        b = b >> 1;
    }
    return ans;
}

// m is prime. use extended euclidean otherwise
int modInv(int a, int m = mod){
    return pow(a, m-2, m);
}

int modDiv(int a, int b, int m = mod){
    return (a * modInv(b, m)) % m;
}

void solve() {
    int a, b, m;
    cin >> a >> b >> m;
    cout << modDiv(a, b, m) << endl;
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