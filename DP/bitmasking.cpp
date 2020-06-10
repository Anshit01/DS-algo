/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

// PROGRAM TO PRINT ALL SUBARRAYS OF AN ARRAY
void printAllSubarrays(vector<int> arr){
    int n = arr.size();
    for(int mask = 0; mask < (1 << n); mask++){
        for(int i = 0; i < n; i++){
            if(mask & (1 << i)){
                cout << arr[i] << ' ';
            }
        }
        cout << '\n';
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    printAllSubarrays(arr);
}