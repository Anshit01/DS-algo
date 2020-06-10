/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

long long fib(int n){
    long long n_2 = 0, n_1 = 1;
    if(n == 0) return 0;
    if(n == 1) return 1;
    for(int i = 1; i < n; i++){
        n_1 = n_1 + n_2;
        n_2 = n_1 - n_2;
    }
    return n_1;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T, n;
    cin >> T;
    while(T--){
        cin >> n;
        cout << fib(n) << endl;
    }
}