#include <iostream>
#include <stack>
#include <string>
using namespace std;

//parenthesis matching
class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for(int i =0;s[i] != '\0';i++){
            if(s[i] == '{' || s[i] == '(' || s[i] == '['){
                stack.push(s[i]);
            }else if(s[i] == '}'){
                if(stack.empty())
                return false;
                if(stack.top() != '{')
                return false;
                stack.pop();
            }else if(s[i] == ')'){
                if(stack.empty())
                return false;
                if(stack.top() != '(')
                return false;
                stack.pop();
            }else if(s[i] == ']'){
               if(stack.empty())
                return false;
                if(stack.top() != '[')
                return false;
                stack.pop();
            }
        }
        return true;
    }
    int lengthOfLastWord(string s) {
        string s1 = "";
        stack<string> stack;
        for(int i =0;s[i] != '\0';i++){
            if(s[i] != ' '){
                s1 += s[i];
                stack.pop();
                stack.push(s1);
            }else{
                s1 = "";
            }
        }
        s1 = stack.top();
        int count = 0;
        while(s1[count] != '\0'){
            count++;
        }
        return count ;
    }
};
void swap(int *a, int *b){
    int tem = *a;
    *a = *b;
    *b=tem;
}
int quick(int arr[], int beg, int end){
    int i =beg, j = end;
    int pivot = arr[i];
    i++;
    while(i<=j){
        if(arr[i]> pivot && arr[j]<pivot){
            swap(arr[i], arr[j]);
        }
        if(arr[i]<pivot){
            i++;
        }
        if(arr[j]>pivot){
            j--;
        }
    }
    swap(arr[beg], arr[j]);
    return j;
}

void quickSort(int arr[], int beg, int end){
    if(beg<end){
        int pivot = quick(arr, beg, end);
        quickSort(arr, beg, pivot);
        quickSort(arr, pivot+1, end);
    }
}


int median(int arr1[], int n1, int arr2[], int n2){
    int i =0, j =0;
    int med1 = 0, med2=0;
    if(n1 % 2 ==0){
        med1 = (arr1[n1/2]*arr1[n1/2 +1])/2;
    }else{
        med1 = arr1[n1/2];
    }   
    if(n2 % 2 ==0){
        med2 = (arr2[n2/2] * arr2[n2/2 +1])/2;
    }
}
int main(){
    int arr[] = {21,2,14,1,0,3, 4, 16, 10,12};
    quickSort(arr, 0, 9);
    for(int a:arr){
        cout<<a<<" ";
    }
}