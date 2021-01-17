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
#define printArray(arr) f(i, 0, arr.size()) cout << arr[i] << ' '; cout << endl
#define mod 1000000007
#define endl '\n'
using namespace std;

void dfs(vector<int> adj[], vector<bool>& visited, int v, vector<int>& ans){
    ans.push_back(v);
    visited[v] = true;
    for(int a : adj[v]){
        if(!visited[a]){
            dfs(adj, visited, a, ans);
        }
    }
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n+1, vector<int>());
    
    vector<bool> visited(n+1, false);
    vector<int> ans;

}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}