#include <iostream>
#include <vector>
using namespace std;

int pivotFind(vector<int>& arr, int start, int end){
    int left = start, right = end - 1;
    while(left <= right){
        if(arr[left] > arr[end] && arr[right] < arr[end]){
            swap(arr[left++], arr[right--]);
        }else if(arr[right] >= arr[end]){
            right--;
        }else{
            left++;
        }
    }
    swap(arr[end], arr[left]);
    return left;
}
void quickSort(vector<int>& arr, int start, int end){
    if(start >= end) return ;
    int pivot = pivotFind(arr, start, end);
    quickSort(arr, start, pivot-1);
    quickSort(arr, pivot+1, end);
}

int main(){
    vector<int> arr = {0, 9, 1, 4,2,3, 4, -1, 7, 6, 0};
    quickSort(arr, 0, arr.size() - 1);
    for(int a:arr){
        cout<<a<<" ";
    }
    cout<<endl;
}