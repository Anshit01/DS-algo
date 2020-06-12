/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

bool isPerfectSquare(int x){
    int l = 0, r = x;
    long long m;
    while(l <= r){
        m = l + (r-l)/2;
        if(m*m == x){
            return true;
        }else if(m*m < x){
            l = m + 1;
        }else{
            r = m - 1;
        }
    }
    return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T, n;
    cin >> T;
    while(T--){
        cin >> n;
        cout << (isPerfectSquare(n)? "YES" : "NO") << endl;
    }
}