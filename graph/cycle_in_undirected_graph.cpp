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

bool dfs(vector<int> adj[], vector<bool>& visited, int root, int parent){
    visited[root] = true;
    for(int a : adj[root]){
        if(a != parent){
            if(visited[a]){
                return true;
            }else{
                if(dfs(adj, visited, a, root)){
                    return true;
                }
            }
        }
    }
    return false;
}

bool isCycle(int V, vector<int>adj[]){
    vector<bool> visited(V, false);
    for(int i = 0; i < V; i++){
        if(!visited[i]){
            if(dfs(adj, visited, i, -1)){
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