/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define int long long
#define f(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define what_is(x) cerr << #x << " is " << x << endl
#define dbg(x) cerr << x << endl
#define dbg2(x, y) cerr << x << ' ' << y << endl
#define dbg3(x, y, z) cerr << x << ' ' << y << ' ' << z << endl
#define inputArray(arr) f(i, 0, arr.size()) cin >> arr[i]
// #define printArray(arr) f(i, 0, arr.size()) cout << arr[i] << ' '; cout << endl
#define mod 1000000007
#define endl '\n'
using namespace std;

void printArray(vector<int>& arr){
    cout << "{ ";
    for(int a : arr){
        cout << a << ' ';
    }
    cout << "}" << endl;
}

void permute(vector<int>& arr, int n, vector<int>& cur, vector<bool>& present){
    if(cur.size() == n){
        printArray(cur);
    }else{
        f(i, 0, n){
            if(!present[i]){
                present[i] = true;
                cur.push_back(arr[i]);
                permute(arr, n, cur, present);
                present[i] = false;
                cur.pop_back();
            }
        }
    }
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> arr(n);
    inputArray(arr);
    vector<bool> present(n, false);
    vector<int> cur;
    permute(arr, n, cur, present);
}