/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int binarySearch(vector<int> arr, int n, int target){
    int l = 0, r = n-1;
    int mid;
    while(l <= r){
        mid = l + (r-l)/2;
        if(arr[mid] == target){
            return mid;
        }else if(arr[mid] < target){
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    return -1;
}

int main(){
    int n, m;
    cout << "Enter Number of values:\n";
    cin >> n;
    cout << "Enter value to search for:\n";
    cin >> m;
    cout << "Enter the values:\n";
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << binarySearch(arr, n, m) << endl;
}