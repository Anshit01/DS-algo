/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

const int p = 31;

vector<int> stringHash(string s){
    int n = s.size();
    ll p_pow = 1;
    vector<int> h(n+1, 0);
    for(int i = 0; i < n; i++){
        h[i+1] = (h[i] + (s[i] - 'a' + 1) * p_pow) % mod;
        p_pow = (p_pow * p) % mod;
    }
    return h;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int T;
    cin >> T;
    while(T--){
        string s;
        cin >> s;
        auto h = stringHash(s);
        for(int x : h){
            cout << x << endl;
        }
        
    }
}