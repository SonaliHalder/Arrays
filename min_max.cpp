#include<iostream>
#include <climits>
using namespace std;
int maxElement(int num[], int n){
    int maximum= INT_MIN;
    for(int i=0; i<n; i++){
        maximum=max(maximum, num[i]);
        }
    return maximum;
}
int minElement(int num[], int n){
    int minimum= INT_MAX;
    for(int i=0; i<n; i++){
        minimum = min(minimum, num[i]);
          }
    return minimum;
}
int main(){
    cout<<"size of array is: ";
    int n;
    cin>>n;    
    int num[100];
    for(int i=0; i<n; i++){
        cin>>num[i];
    }
    cout<<"Maximum is " << maxElement(num, n)<<endl;
    cout<<"Minimum is " << minElement(num, n)<<endl;
}