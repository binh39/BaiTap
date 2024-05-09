#include <bits/stdc++.h>

using namespace std;

bool checkDoi(int n){
    int a=n,length=0;
    while(a>0){
       a/=10;
       length++;
    }
    int x[length];
    int i=0;
    bool check = true;
    while(n>0){
        x[i]=n%10;
        n/=10;
        i++;
    }
    for(int i=0;i<length/2;i++){
        if(x[i]!=x[length-i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    int a,b;
    int dem=0;
    int t; cin>>t;
    for(int i=1;i<=t;i++){
        cin>>a>>b;
        for(int j=a;j<=b;j++){
            if(checkDoi(j)) dem++;
        }
        cout<<dem<<endl;
        dem=0;
    }
}
