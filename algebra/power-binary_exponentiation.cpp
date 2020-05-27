/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

ll power(ll a, ll b){
    ll ans = 1;
    while(b){
        if(b & 1){
            ans *= a;
        }
        a *= a;
        b = b >> 1;
    }
    return ans;
}

ll power_modular(ll a, ll b){
    ll ans = 1;
    while(b){
        if(b & 1){
            ans *= a;
            ans %= mod;
        }
        a *= a;
        a %= mod;
        b = b >> 1;
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int T, a, b;
    cin >> T;
    while(T--){
        cin >> a >> b;
        cout << power(a, b) << ' ' << power_modular(a, b) << endl;
    }
}