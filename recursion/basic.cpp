#include<iostream>
using namespace std;
void fun(int n){
    if(n==0) return;
    cout<<"Good Morning"<<endl;
    fun(n-1);
}
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    fun(n);
}