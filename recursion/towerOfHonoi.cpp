#include<iostream>
using namespace std;
void honio(int n,char s,char h,char d){
    if(n==0) return;
    honio(n-1,s,d,h);
    cout<<s<<"->"<<d<<endl;
    honio(n-1,h,s,d);
}
int main(){
    honio(4,'A','B','C');
}