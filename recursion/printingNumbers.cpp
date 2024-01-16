#include<iostream>
using namespace std;
//reverse printing
void reverseNum(int n){
    if(n==0) return;
    cout<<n<<endl;
    reverseNum(n-1);
}
//sida printing
void num(int n){
    if(n==0) return;
    num(n-1);
    cout<<n<<endl;
}
void print(int i,int n){
    if(i>n) return;
    cout<<i<<endl;
    print(i+1,n);
}
void cal(int sum,int n){
    if(n==0){
        cout<<sum<<endl;
        return;
    }
    cal(sum+n,n-1);

}
int pow(int a,int b){
    if(b==0) return 1;
    return a*pow(a,b-1);
}
int main(){
    // reverseNum(5);
    // num(5);
    // print(1,6);
    // cal(0,5);
    cout<<pow(3,3);
}   
