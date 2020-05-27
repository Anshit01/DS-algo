#include <iostream>

using namespace std;


void bubble_sort(int *arr, int *end){
    int n = int(end - arr);
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                arr[j+1] = arr[j] + arr[j+1] - (arr[j] = arr[j+1]);
            }
        }
    }
}

void selection_sort(int *arr, int *end){
    int n = int(end - arr);
    int min_ind = 0;
    for(int i = 0; i < n-1; i++){
        min_ind = i;
        for(int j = i+1; j < n; j++){
            if(arr[min_ind] > arr[j])
                min_ind = j;
        }
        arr[min_ind] = arr[min_ind] + arr[i] - (arr[i] = arr[min_ind]);
    }
}

void insertion_sort(int *arr, int *end){
    int n = int(end - arr);
    int  tmp, j = 0;
    for(int i = 1; i < n; i++){
        tmp = arr[i];
        j = i;
        while(tmp < arr[j-1] && j > 0){
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
    insertion_sort(arr, arr+n);
    cout << "Sorted Array: \n";
    for(int i = 0; i < n; i++){
        cout << arr[i] << "  ";
    }
    cout << endl;
}