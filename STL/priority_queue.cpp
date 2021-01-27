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

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    priority_queue<int> maxq;   // max heap
    priority_queue<int, vector<int>, greater<int>> minq;    // min heap
    for(int a : {1, 5, 7, 2, 4}){
        maxq.push(a);
        minq.push(a);
    }
    cout << "maxq" << endl;
    while(!maxq.empty()){
        cout << maxq.top() << endl;
        maxq.pop();
    }
    cout << "minq" << endl;
    while(!minq.empty()){
        cout << minq.top() << endl;
        minq.pop();
    }
}