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

vector<int> bfs(int n, vector<vector<int>>& adj){
    queue<int> q;
    vector<int> ans;
    vector<bool> visited(n+1, false);
    q.push(1);      //if 1 is the root vertex
    visited[1] = true;
    while(!q.empty()){
        int v = q.front();
        q.pop();
        ans.push_back(v);
        for(int a : adj[v]){
            if(!visited[a]){
                q.push(a);
                visited[a] = true;
            }
        }
    }
    return ans;
}

void solve() {
    int n, m;
    vector<vector<int>> adj(n+1, vector<int>());
    int a, b;
    f(i, 0, m){
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    auto ans = bfs(n, adj);
    for(int a : ans){
        cout << a << ' ';
    }
    cout << endl;
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