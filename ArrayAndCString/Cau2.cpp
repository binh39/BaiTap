#include <bits/stdc++.h>

using namespace std;

int main(){
	char a[101];
    cin.getline(a,101);
    int length=0;
    while(a[length] != '\0'){
        length++;
    }

    bool check=true;

    for(int i=0;i<length/2;i++){
        if(a[i]!=a[length-i-1]){
            check=false;
        }
    }
    if(check) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}