/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
//#define int long long
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


// Greater than comparator function
// to sort array in non-increasing order and to get lower bound
bool compare(int a, int b){
    return a > b;
}

// To get upper bound ( use it with lower bound array only)
bool compareUpper(int a, int b){
    return a >= b;
}

// Comparator for pairs; sorts pairs in decreasing order of first value and then increasing order of second value
// Use it for sorting and to get the lower bound
bool pairCompare(const pair<int, int>& a, const pair<int, int>& b){
    if(a.first > b.first){
        return true;
    }else if(a.first == b.first && a.second < b.second){
        return true;
    }
    return false;
}

// Comparator for pairs; sorts pairs in decreasing order of first value and then increasing order of second value
// Use it with lower bound only to get the upper bound
bool pairCompareUpper(const pair<int, int>& a, const pair<int, int>& b){
    if(a.first > b.first){
        return true;
    }else if(a.first == b.first && a.second <= b.second){
        return true;
    }
    return false;
}

// Comparator to compare Container of pairs with int key
struct keyCompare {
    bool operator()(const pair<int, int>& pr, const int& val){      //for lower bound
        if(pr.first > val){
            return true;
        }
        return false;
    }
    bool operator()(const int& val, const pair<int, int>& pr) {     //for upper bound
        if(val > pr.first){
            return true;
        }
        return false;
    }
};

//Comparator for set of pairs
struct cmpForSet{
    bool operator() (const pair<int, char>& a, const pair<int, char>& b){
        if(a.first > b.first){
            return true;
        }
        return false;
    }
};

int32_t main(){
    cout << "Sort array in non-decreasing order:" << endl;
    int n;
    cin >> n;
    vector<int> arr(n);
    inputArray(arr);
    sort(arr.begin(), arr.end(), compare);      //or use STL std::greater function
    printArray(arr);
    cout << "------------------------" << endl;
    int x, y;
    cout << "Binary search in non-decreasing array:" << endl;
    cin >> x;
    int lr = lower_bound(arr.begin(), arr.end(), x, compare) - arr.begin();
    int up = lower_bound(arr.begin(), arr.end(), x, compareUpper) - arr.begin();
    if(lr != up){
        cout << "Number " << x << " exists in the array from " << lr << " to " << up - 1 << endl;
    }else{
        cout << "Number " << x << " does not exist in the array" << endl;
    }
    cout << "-----------------------------" << endl;
    cout << "Sorting array of pairs" << endl;
    cout << "Length: " << endl;
    cin >> n;
    cout << "Enter n pairs:" << endl;
    vector<pair<int, int>> pairs(n);
    f(i, 0, n){
        cin >> x >> y;
        pairs[i] = {x, y};
    }
    sort(pairs.begin(), pairs.end(), pairCompare);
    cout << "Sorted Array: \n";
    for(auto pr : pairs){
        cout << pr.first << ' ' << pr.second << endl;
    }
    cout << "----------------------------" << endl;
    cout << "Enter pair to find" << endl;
    cin >> x >> y;
    lr = lower_bound(pairs.begin(), pairs.end(), make_pair(x, y), pairCompare) - pairs.begin();
    up = lower_bound(pairs.begin(), pairs.end(), make_pair(x,y), pairCompareUpper) - pairs.begin();
    cout << "The pair exists in the array from " << lr << " to " << up - 1 << endl;
    cout << "----------------------------" << endl;
    cout << "Enter key to search for" << endl;
    cin >> x;
    lr = lower_bound(pairs.begin(), pairs.end(), x, keyCompare()) - pairs.begin();
    up = upper_bound(pairs.begin(), pairs.end(), x, keyCompare()) - pairs.begin();
    cout << "The key exists in the array from " << lr << " to " << up - 1 << endl;
}