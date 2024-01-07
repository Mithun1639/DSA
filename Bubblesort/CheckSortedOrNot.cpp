#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,5,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i;
    for(i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            cout<<"Not Sorted";
            break;
        }
    }
    if(i==n){
        cout<<"It is Sorted";
    }
}