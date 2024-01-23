#include<iostream>
using namespace std;
int main(){
    int arr[]={4,2,1,6,5,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int i=1;
    int j=i;
    while(j>=0){
        int j=i;
        if(arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
        }
        i++;
        j--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}