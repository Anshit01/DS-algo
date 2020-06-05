/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int kadane(vector<int> arr){
    int max_so_far = 0, max_ending_here = 0;
    for(int a : arr){
        max_ending_here += a;
        if(max_ending_here < 0){
            max_ending_here = 0;
        }
        max_so_far = max(max_so_far, max_ending_here);
    }
    if(max_so_far == 0){
        max_so_far = *max_element(arr.begin(), arr.end());
    }
    return max_so_far;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T, n;
    cin >> T;
    while(T--){
        cin >> n;
        vector<int> arr(n);
        f(i, 0, n){
            cin >> arr[i];
        }
        cout << kadane(arr) << endl;
    }
}