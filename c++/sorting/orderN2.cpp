#include <iostream>
#include <vector>
using namespace std;

// keep swaping untill all elements are in sorted position
void bubbleSort(vector<int> arr){
    int n = arr.size();
    for(int i = 0;i<n;i++){
        bool sw = false;
        for(int j = 1;j<n;j++){
            if(arr[j-1] > arr[j]){
                sw = true;
                swap(arr[j-1], arr[j]);
            }
        }
        if(!sw) break;
    }
    cout<<"Bubble Sort Output"<<endl;
    for(int a : arr){
        cout<<a<< " ";
    }
    cout<<endl;
}

//repeatedly select the smallest element and place it at the begining
void selectionSort(vector<int> arr){
    int n = arr.size();
    for(int i = 0;i<n;i++){
        int minIndex = i;
        for(int j = i+1;j<n;j++){
            if(arr[minIndex] > arr[j]) minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }

    cout<<"Selection sort output"<<endl;
    for(int a : arr){
        cout<<a<<" ";
    }
    cout<<endl;
}

void insertionSort(vector<int> arr){
    int n = arr.size();
    for(int i = 1;i<n;i++){
        int j = i;
        while(j > 0){
            if(arr[j-1] <= arr[j]){
                break;
            }
            swap(arr[j-1], arr[j]);
            j--;
        }
        
    }

    cout<<"Insertion sort output"<<endl;
    for(int a : arr){
        cout<<a<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> arr = {0, 9, 8, 7, 1, 2, 3, 4, 5, 6, 7, -1};
    bubbleSort(arr);
    selectionSort(arr);
    insertionSort(arr);
}