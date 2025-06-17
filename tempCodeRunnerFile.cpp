#include<iostream>
using namespace std;
void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr1[8]={10,20,30,40,50,60,70,80};
    int arr2[7]={7,14,21,35,42,49,56};

    reverse(arr1, 8);
    reverse(arr2, 7);

    printArray(arr1, 8);
    printArray(arr2, 7);

}