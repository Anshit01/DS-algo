/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define int long long
#define f(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define inputArray(arr) f(i, 0, arr.size()) cin >> arr[i]
#define printArray(arr) f(i, 0, arr.size()) cout << arr[i] << ' '; cout << endl
#define endl '\n'
typedef long long ll;
const int mod = 1e9+7;
using namespace std;

template<typename T, bool max_mode=true>
class SparseTable {
    int n, lg;
    vector<vector<T>> table;

    T op(T a, T b){
        if(max_mode) return max(a, b);
        return min(a, b);
    }

public:
    SparseTable(vector<T> arr){
        n = arr.size();
        lg = log2(n) + 1;
        table = vector<vector<T>>(n, vector<T>(lg));
        for(int i = 0; i < n; i++){
            table[i][0] = arr[i];
        }
        for(int j = 1; j < lg; j++){
            for(int i = 0; i + (1<<j) - 1 < n; i++){
                table[i][j] = op(table[i][j-1], table[i + (1 << (j-1))][j-1]);
            }
        }
    }

    T query(int l, int r){
        if(l > r || l < 0 || r >= n) throw out_of_range("Out of range in Sparse Table");
        int j = log2(r - l + 1);
        return op(table[l][j], table[r - (1 << j) + 1][j]);
    }
};

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    inputArray(a);
    SparseTable<int, false> sparseTable(a);
    int q;
    cin >> q;
    f(i, 0, q){
        int l, r;
        cin >> l >> r;
        cout << sparseTable.query(l, r) << endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    while(T--){
        solve();
        // if(solve())
        // 	cout << "YES" << endl;
        // else
        // 	cout << "NO" << endl;
    }
    return 0;
}