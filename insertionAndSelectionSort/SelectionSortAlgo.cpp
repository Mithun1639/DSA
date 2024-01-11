//Selection sort
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={5,3,6,2,1,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        int minidx=-1;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                minidx=j;
            }
        }
        swap(arr[i],arr[minidx]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}