#include<iostream>
using namespace std;
int main(){
    int arr[]={5,2,3,4,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n-1;i++){   // just for traversing
        for(int j=0;j<n-1-i;j++){  // swaping each element this loop is used
            if(arr[j]>arr[j+1]){  // checking the condition before swapping
                swap(arr[j],arr[j+1]);  //swapping
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}