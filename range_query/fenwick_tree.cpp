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


struct FenwickTree {
    vector<int> tree;
    int size;

    FenwickTree(int size){
        this->size = size + 1;
        tree.assign(size + 1, 0);
    }

    FenwickTree(vector<int>& arr){
        this->size = arr.size() + 1;
        tree.assign(size + 1, 0);
        for(int i = 1; i <= size; i++){
            add(i, arr[i-1]);
        }
    }

    void add(int k, int x){
        while(k <= size){
            tree[k] += x;
            k += k&-k;
        }
    }

    int sum(int k){
        int s = 0;
        while(k > 0){
            s += tree[k];
            k -= k&-k;
        }
        return s;
    }

    int sum(int l, int r){
        return sum(r) - sum(l-1);
    }
};

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    inputArray(a);
    FenwickTree tree(a);
    int q;
    cin >> q;
    f(i, 0, q){
        int l, r;
        cin >> l >> r;
        cout << tree.sum(l, r) << endl;
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