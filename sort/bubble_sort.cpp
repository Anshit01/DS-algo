#include <iostream>

using namespace std;


void bubble_sort(int* arr, int* end){
    int n = (int) (end - arr);
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1])
                arr[j+1] = arr[j] + arr[j+1] - (arr[j] = arr[j+1]);
        }
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
    bubble_sort(arr, arr+n);
    cout << "Sorted Array: \n";
    for(int i = 0; i < n; i++){
        cout << arr[i] << "  ";
    }
    cout << endl;
}