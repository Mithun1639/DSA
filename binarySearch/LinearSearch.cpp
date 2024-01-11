#include<iostream>
using namespace std;
int main(){
    int arr[]={5,4,3,22,35};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool flag=false;
    int key;
    cout<<"Enter the key element";
    cin>>key;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            flag=true;
        }
    }
    if(flag){
        cout<<"Present";
    }
    else{
        cout<<"Not Present";
    }
}