#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,6,7,8,45,67,78,89};
    int n=sizeof(arr)/sizeof(arr[0]);
    int lo=0;
    int hi=n-1;
    int target=43;
    while(hi>=lo){              //if equalto is not there it will cause problem
        int mid=(lo+hi)/2;
        if(arr[mid]==target){
            // cout<<mid;
            break;
        }
        else if(arr[mid]>target){
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    cout<<arr[hi]; // lower bound
    cout<<endl<<arr[lo]; // upper bound
}




