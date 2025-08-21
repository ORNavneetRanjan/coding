#include <iostream>
#include <vector>
using namespace std;

void heapify(vector<int>& arr, int length, int index){
    if(index >= length) return ;
    int left = 2 * index + 1;
    int right = 2 * index + 2;

    int largest = index;

    if(left < length && arr[left] > arr[largest]){
        largest = left;
    }

    if(right < length && arr[right] > arr[largest]){
        largest = right;
    }

    if(largest != index){
        swap(arr[index], arr[largest]);
        heapify(arr, length, largest);
    }
}

void heapSort(vector<int>& arr){
    int n = arr.size();
    for(int i = n / 2 -1;i>=0;i--){
        heapify(arr, n, i);
    }

    for(int i = n - 1;i>=0;i--){
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

void printArray(vector<int>& arr){
    for (int i = 0; i < arr.size(); ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

// Driver's code
int main(){
    vector<int> arr = { 9, 4, 3, 8, 10, 2, 5 };

    // Function call
    heapSort(arr);

    cout << "Sorted array is \n";
    printArray(arr);
}