#include <iostream>

using namespace std;


void insertion_sort(int* arr, int* end){
    int n = (int) (end - arr);
    int tmp, j;
    for(int i = 1; i < n; i++){
        tmp = arr[i];
        j = i-1;
        while(tmp < arr[j] && j >= 0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = tmp;
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
    insertion_sort(arr, arr+n);
    cout << "Sorted Array: \n";
    for(int i = 0; i < n; i++){
        cout << arr[i] << "  ";
    }
    cout << endl;
}