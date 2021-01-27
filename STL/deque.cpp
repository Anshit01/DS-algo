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
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(5);       // {5, 1, 2}
    cout << dq.front() << endl;
    dq.pop_front();
    cout << dq.front() << endl;
    dq.pop_front();
    cout << dq.back() << endl;
    dq.pop_back();
}