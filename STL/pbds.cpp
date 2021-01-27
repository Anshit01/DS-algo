#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<
int,
null_type,
less<int>,      //Comparator function goes here... for decreasing order use std::greater
rb_tree_tag,
tree_order_statistics_node_update>
indexed_set;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    indexed_set pbds;
    for(int& a: arr){
        cin >> a;
        pbds.insert(a);
    }
    cout << pbds.size() << endl;
    for(int a : pbds){
        cout << a << ' ';
    }
    cout << endl;
    for(int i = 0; i < n; i++){
        cout << *pbds.find_by_order(i) << ' ';
    }
    cout << endl;
    for(int i = 0 ; i < n; i++){
        cout << pbds.order_of_key(arr[i]) << ' ';
    }
    cout << endl;
    cout << *pbds.find(4) << endl;
    cout << endl;
}