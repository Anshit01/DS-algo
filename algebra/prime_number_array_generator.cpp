/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

vector<int> generatePrimes(int n){
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
    vector<int> primes;
    for(int i = 2; i <= n; i++){
        if(is_prime[i]){
            primes.push_back(i);
        }
    }
    return primes;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int T, n;
    cin >> T;
    while(T--){
        cin >> n;
        auto primes = generatePrimes(n);
        for(int x : primes){
            cout << x << ' ';
        }
        cout << endl;
        cout << "Total " << primes.size() << " primes generated." << endl;
    }
}