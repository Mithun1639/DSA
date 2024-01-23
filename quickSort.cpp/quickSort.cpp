#include<iostream>
using namespace std;
int partition(int arr[],int si,int ei){
    int pivotidx=arr[si];
    int count=0;
    for(int i=si+1;i<=ei;i++){
        if(arr[i]<arr[si]) count++;
    }
    pivotidx=count+si;
    swap(arr[si],arr[pivotidx]);
    int i=si;
    int j=ei;
    while(i<pivotidx && j>pivotidx){
        if(arr[i]<=arr[pivotidx]) i++;
        if(arr[j]>=arr[pivotidx]) j--;
        else if(arr[i]>=arr[pivotidx] && arr[j]<arr[pivotidx]){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotidx;
}
void quickSort(int arr[],int si,int ei){
    if(si>=ei) return;
    int pivot=partition(arr,si,ei);
    quickSort(arr,si,pivot-1);
    quickSort(arr,pivot+1,ei);
}
int main(){
    int arr[]={5,1,7,9,3,2,3,45,76,-24,-3,6,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    quickSort(arr,0,n-1);
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int lo=0;
        int hi=n-1;
        int mid=0;
        while(lo<=hi){
            mid=lo+(hi-lo)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) lo=mid+1;
            else hi=mid-1;
        }
        return lo;
    }