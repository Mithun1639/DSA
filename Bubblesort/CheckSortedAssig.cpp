// Check if the given array is almost sorted. (elements are at-most one position away)
#include<iostream>
using namespace std;
int main(){
    int arr[]={2,1,4,3,5};
    int count=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    int i;
    for(i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            cout<<" NO ";
            break;

        }
    }
    if(i==n){
        cout<<" YES ";
    }
}