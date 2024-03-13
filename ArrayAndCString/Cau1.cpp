#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin>>n;
    int a[10000]={0};
    bool check=false;

    for(int i=0;i<n;i++){
        int x; cin>>x;
        a[x-1]++;
        if(a[x-1]>=2) check=true;
    }

    if(check) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}