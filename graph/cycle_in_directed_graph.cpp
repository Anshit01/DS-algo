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

bool dfs(vector<int> adj[], vector<bool>& visited, vector<bool>& recStack, int v){
    visited[v] = true;
    recStack[v] = true;
    for(int a : adj[v]){
        if(recStack[a]){
            return true;
        }
        if(!visited[a]){
            if(dfs(adj, visited, recStack, a)){
                return true;
            }
        }
    }
    recStack[v] = false;
    return false;
}

bool isCyclic(int V, vector<int> adj[]) {
    vector<bool> visited(V, false);
    vector<bool> recStack(V, false);
    for(int i = 0; i < V; i++){
        if(!visited[i]){
            if(dfs(adj, visited, recStack, i)){
                return true;
            }
        }
    }
    return false;
}

void solve() {
    int n;
    cin >> n;
    
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