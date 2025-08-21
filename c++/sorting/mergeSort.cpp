#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int start, int mid, int end){
    if(start >= end) return;
    
    vector<int> left;
    vector<int> right;
    for(int i = start;i<=mid;i++){
        left.push_back(arr[i]);
    }
    for(int i = mid+1;i<=end;i++){
        right.push_back(arr[i]);
    }
    int l = 0, r = 0, index = start;
    while(l < left.size() && r < right.size()){
        if(left[l] > right[r]){
            arr[index++] = right[r++];
        }else{
            arr[index++] = left[l++];
        }
    }

    while(l < left.size()) arr[index++] = left[l++];
    while(r < right.size()) arr[index++] = right[r++];
}

void mergeSort(vector<int>& arr, int start, int end ){
    if(start >= end) return ;
    int mid = start + (end - start) / 2; 
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}

int main(){
    vector<int> arr = {1, 2, 3, 0 , 9 , -1, 3, 5, 4, 3, 1};
    mergeSort(arr, 0, arr.size() - 1);
    for(int a:arr){
        cout<<a<< " ";
    }
    cout<<endl;
}