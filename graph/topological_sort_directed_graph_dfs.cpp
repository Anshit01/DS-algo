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

void topoSortRec(vector<int> adj[], vector<bool>& visited, stack<int>& st, int v){
    for(int a : adj[v]){
        if(!visited[a]){
            visited[a] = true;
            topoSortRec(adj, visited, st, a);
        }
    }
    st.push(v);
}

vector<int> topoSort(int V, vector<int> adj[]) {
    vector<bool> visited(V, false);
    stack<int> st;
    for(int i = 0; i < V; i++){
        if(!visited[i]){
            visited[i] = true;
            topoSortRec(adj, visited, st, i);
        }
    }
    vector<int> ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
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