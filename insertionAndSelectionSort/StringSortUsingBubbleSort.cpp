#include<iostream>
using namespace std;
int main(){
    string s="sdjfhrj";
    int n=s.length();
    for(int i=0;i<n;i++){
        cout<<s[i];
    }
    cout<<endl;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(s[j]>s[j+1]){
                swap(s[j],s[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<s[i];
    }
}


