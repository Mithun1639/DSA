// Sort a String in decreasing order of values 
// associated after removal of values smaller than X.
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s="ABYZXBDJKZX";
    string str="";
    for(int x:s){           //using for each loop
        if(x>='X'){
            str+=x;
        }
    }
    // cout<<str;
    // sort(str.begin(),str.end());    using inbuilt sort
    int n=str.length();
    for(int i=0;i<n-1;i++){             //using bubble sort
        for(int j=0;j<n-1-i;j++){
            if(str[i]<str[i+1]){
                swap(str[i],str[i+1]);
            }
        }
    }
    cout<<str;

}