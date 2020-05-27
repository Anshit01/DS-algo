/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

ll gcd(ll a, ll b){
    while(b){
        a %= b;
        swap(a, b);
    }
    return a;
}

ll lcm(ll a, ll b){
    return a / gcd(a, b) * b;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    ll T, a, b;
    cin >> T;
    while(T--){
        cin >> a >> b;
        cout << gcd(a, b) << ' ' << lcm(a, b) << endl;
    }
}