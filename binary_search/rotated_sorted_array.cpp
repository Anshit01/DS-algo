/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int findSmallest(vector<int>& arr, int n){
    int l = 0, r = n-1, mid, ans;
    while(l <= r){
        mid = l + (r-l)/2;
        if(arr[mid] <= arr[0]){
            ans = mid;
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter Number of values:\n";
    cin >> n;
    cout << "Enter the values:(The array must be rotated sorted array with no duplicate values.)\n";
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Lowest value at: " << findSmallest(arr, n) << endl;
}