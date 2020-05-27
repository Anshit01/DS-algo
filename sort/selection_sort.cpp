#include <iostream>

using namespace std;


void selection_sort(int* arr, int* end){
    int n = (int) (end - arr);
    int min_index;
    for(int i = 0; i < n-1; i++){
        min_index = i;
        for(int j = i; j < n; j++){
            if(arr[min_index] > arr[j])
                min_index = j;
        }
        arr[i] = arr[i] + arr[min_index] - (arr[min_index] = arr[i]);
    }
}

int main(){
    int n;
    cout << "Enter total number of values to sort: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    selection_sort(arr, arr+n);
    cout << "Sorted Array: \n";
    for(int i = 0; i < n; i++){
        cout << arr[i] << "  ";
    }
    cout << endl;
}