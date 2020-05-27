#include <iostream>
#include <vector>

using namespace std;


vector<int> merge_sort(vector<int>& arr){
    int n = arr.size();
    if(n == 1){
        return arr;
    }
    vector<int> left(arr.begin(), arr.begin() + n/2);
    vector<int> right(arr.begin() + n/2, arr.end());
    left = merge_sort(left);
    right = merge_sort(right);
    int leftn = left.size(), rightn = right.size();
    int li = 0, ri = 0, i= 0;
    while(li < leftn || ri < rightn){
        if(li < leftn && ri < rightn){
            if(left[li] < right[ri]){
                arr[i] = left[li];
                li++;
            }else{
                arr[i] = right[ri];
                ri++;
            }
        }else if(li < leftn){
            arr[i] = left[li];
            li++;
        }else{
            arr[i] = right[ri];
            ri++;
        }
        i++;
    }
    return arr;
}

int main(){
    int n;
    cout << "Enter total number of values to sort: ";
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    arr = merge_sort(arr);
    cout << "Sorted Array: \n";
    for(int i = 0; i < n; i++){
        cout << arr[i] << "  ";
    }
    cout << endl;
}