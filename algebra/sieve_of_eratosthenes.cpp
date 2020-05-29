/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

vector<char> sieve(int n){
    vector<char> is_prime(n+1, true);
    is_prime[0] = false;
    is_prime[1] = false;
    for(int i = 2; i*i <= n; i++){
        if(is_prime[i]){
            for(int j = i*i; j <= n; j += i){
                is_prime[j] = false;
            }
        }
    }
    return is_prime;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int T, n;
    cin >> T;
    while(T--){
        cin >> n;
        auto is_prime = sieve(n);
        for(bool x : is_prime){
            cout << x << ' ';
        }
        cout << endl;
    }
}