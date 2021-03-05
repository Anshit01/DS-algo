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

class FenwickTree {
    vector<int> arr;
    vector<int> tree;

    int sum(int i){
        int s = 0;
        while(i >= 0){
            s += tree[i];
            i = (i & (i+1)) - 1;
        }
        return s;
    }

public:
    int size;

    FenwickTree(int size){
        this->size = size;
        arr.assign(size, 0);
        tree.assign(size, 0);
    }

    FenwickTree(vector<int>& arr) : FenwickTree(arr.size()){
        for(int i = 0; i < size; i++){
            add(i, arr[i]);
        }
    }

    void add(int i, int val){
        arr[i] += val;
        while(i < size){
            tree[i] += val;
            i = i | (i+1);
        }
    }

    void update(int i, int val){
        int curVal = arr[i];
        arr[i] = val;
        while(i < size){
            tree[i] += val - curVal;
            i = i | (i+1);
        }
    }

    int query(int l, int r){
        return sum(r) - sum(l-1);
    }
};

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    inputArray(a);
    FenwickTree tree(a);
    tree.add(2, 100);
    f(i, 0, q){
        int l, r;
        cin >> l >> r;
        cout << tree.query(l - 1, r - 1) << endl;
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