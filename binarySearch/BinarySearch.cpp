#include<iostream>
using namespace std;
int main(){
    int arr[]={1,4,5,7,8,23,44,56,78,90,654};
    int n=sizeof(arr)/sizeof(arr[0]);
    int hi=n-1;
    int lo=0;
    int key =7;
    while(hi>lo){
        int mid=(lo+hi)/2;
        if(arr[mid]==key){
            cout<<mid;
            break;
        }
        else if(arr[mid]>key){
            hi=mid-1;
        }
        else{
            lo=mid+1;
        } 
    }
}