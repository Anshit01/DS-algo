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

vector<int> rabin_karp_search(string text, string s){
    int textlen = text.size(), slen = s.size();
    vector<long long> p_pow(max(textlen, slen));
    p_pow[0] = 1;
    for(int i = 1; i < p_pow.size(); i++){
        p_pow[i] = (p_pow[i-1] * p) % mod;
    }

    int sHash = 0;
    for(int i = 0; i < slen; i++){
        sHash = (sHash + (long long)(s[i] - 'a' + 1) * p_pow[i]) % mod;
    }
    vector<long long> h(textlen+1, 0);
    for(int i = 0; i < textlen; i++){
        h[i+1] = (h[i] + (text[i] - 'a' + 1) * p_pow[i]) % mod;
    }
    vector<int> occurences;
    for(int i = 0; i + slen - 1 < textlen; i++){
        long long cur_h = (mod + h[i+slen] - h[i]) % mod;
        if(cur_h == (sHash * p_pow[i]) % mod){
            occurences.push_back(i);
        }
    }
    return occurences;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int T;
    cin >> T;
    while(T--){
        string text, s;
        cin >> text >> s;
        auto ans = rabin_karp_search(text, s);
        for(int i : ans){
            cout << i << ' ';
        }
        cout << endl;
    }
}