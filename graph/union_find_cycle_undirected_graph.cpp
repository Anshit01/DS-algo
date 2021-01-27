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

vector<pair<int, int>> toEdges(int V, vector<int> adj[]){
    set<pair<int, int>> st;
    for(int u = 0; u < V; u++){
        for(int v : adj[u]){
            if(st.find({u, v}) == st.end() && st.find({v, u}) == st.end()){
                st.insert({u, v});
            }
        }
    }
    vector<pair<int, int>> edges;
    for(auto pr : st){
        edges.push_back(pr);
    }
    return edges;
}

int find(vector<int>& parent, int u){
    if(parent[u] == -1){
        return u;
    }
    return find(parent, parent[u]);
    
}

void unionOfSets(vector<int>& parent, int u, int v){
    int rootu = find(parent, u);
    int rootv = find(parent, v);
    parent[rootu] = rootv;
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