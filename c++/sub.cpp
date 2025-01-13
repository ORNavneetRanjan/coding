#include <iostream>
#include <vector>
using namespace std;

// Linear Search Function
int linear(vector<int>& arr, int target) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

// Binary Search Function
int binarySearch(vector<int>& arr, int target) {
    int n = arr.size();
    int start = 0;
    int end = n - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2; 
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] > target) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return -1;
}

int main() {
    cout << "Which search do you want to apply?\n";
    cout << "1. Linear Search\n2. Binary Search\n";
    int n;
    cin >> n;

    if (n != 1 && n != 2) {
        cout << "Invalid choice! Please enter 1 or 2." << endl;
        return 0;
    }

    vector<int> arr;
    int total;

    cout << "Enter the number of elements: ";
    cin >> total;

    cout << "Enter the elements:\n";
    for (int i = 0; i < total; i++) {
        int b;
        cout << "Element " << i + 1 << ": ";
        cin >> b;
        arr.push_back(b);
    }

    int target;
    cout << "Enter the element you want to search: ";
    cin >> target;

    if (n == 1) {
        
        int res = linear(arr, target);
        if (res == -1) {
            cout << "Element not found" << endl;
        } else {
            cout << "The element is present at index " << res << endl;
        }
    } else {
        
        cout << "!!! Ensure the array is sorted for Binary Search !!!" << endl;

        
        bool isSorted = true;
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] < arr[i - 1]) {
                isSorted = false;
                break;
            }
        }

        if (!isSorted) {
            cout << "Error: Array is not sorted. Binary Search requires a sorted array." << endl;
            return 0;
        }

        int res = binarySearch(arr, target);
        if (res == -1) {
            cout << "Element not found" << endl;
        } else {
            cout << "The element is present at index " << res << endl;
        }
    }

    return 0; 
}
