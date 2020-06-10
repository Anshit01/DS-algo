/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

bitset<(INT32_MAX+1LL)> arr;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T, n;
    cin >> T;
    while(T--){
        arr.reset();
        cin >> n;
        int a;
        f(i, 0, n){
            cin >> a;
            arr[a] = 1;
        }
        cout << arr.count() << endl;
    }
}