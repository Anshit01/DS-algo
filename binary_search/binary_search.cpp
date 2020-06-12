#include <iostream>
#include <limits>
using namespace std;

int binarySearch(int arr[], int, int, int);

int main(){
    int n, elementToSearch, indexFound;
    int *arr;
    cout << "This is a demo program which uses binary search to search for a given element in a sorted array of given length." <<endl;
    cout << endl << "Enter the length of array:" << endl;
    cin >> n;
    arr = new int[n];
    cout << "Enter the elements of array in accending order:" << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Enter the value to search for:" << endl;
    cin >> elementToSearch;
    indexFound = binarySearch(arr, 0, n-1, elementToSearch);
    if(indexFound == INT32_MIN){
        cout << "Not Found!" << endl;
    }
    else{
        cout << "The required element lies at index " << indexFound << "." << endl;
    }
}

//recursive function for binary search
int binarySearch(int arr[], int start, int end, int elementToSearch){
    if(start == end){
        if(arr[start] == elementToSearch){
            return start;
        }
        else{
            return INT32_MIN;
        }
    }
    int mid = (start + end) / 2;
    if(arr[mid] < elementToSearch){
        return binarySearch(arr, mid+1, end, elementToSearch);
    }
    else if(elementToSearch < arr[mid]){
        return binarySearch(arr, start, mid, elementToSearch);
    }
    else{
        return mid;
    }
}