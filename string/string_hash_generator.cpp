/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

const int p1 = 31;
const int p2 = 61;

int stringHash(string s, const int p){
    int n = s.length();
    ll p_pow = 1;
    ll hash = 0;
    for(int i = 0; i < n; i++){
        hash = (hash + (s[i] - 'a' + 1) * p_pow) % mod;
        p_pow = (p_pow * p) % mod;
    }
    return hash;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int T;
    cin >> T;
    while(T--){
        string s;
        cin >> s;
        int hash1 = stringHash(s, p1);
        int hash2 = stringHash(s, p2);
        cout << "Hash1: " << hash1 << endl;
        cout << "Hash2: " << hash2 << endl;
    }
}