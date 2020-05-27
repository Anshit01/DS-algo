#include <iostream>

using namespace std;

void bubble_sort(int *arr, int *end){
    int n = int(end - arr);
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1])
                arr[j+1] = arr[j+1] + arr[j] - (arr[j] = arr[j+1]);
        }
    }
}

void selection_sort(int *arr, int *end){
    int n = int(end - arr);
    int min_index;
    for(int i = 0; i < n-1; i++){
        min_index = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[min_index])
                min_index = j;
        }
        arr[min_index] = arr[min_index] + arr[i] - (arr[i] = arr[min_index]);
    }
}

void insertion_sort(int *arr, int *end){
    int n = int(end - arr);
    int tmp, j;
    for(int i = 1; i < n; i++){
        tmp = arr[i];
        j = i;
        while(arr[j] < arr[j-1] && j > 0){
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = tmp;
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