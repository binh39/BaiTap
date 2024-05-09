#include <bits/stdc++.h>

using namespace std;

vector<int> k;

int catgo(int a[],int n,int x,int sum){
	if(x>=n){
		cout<<sum<<endl;
		return 0;	
	}
	int tong=0;
	for(int i=0;i<n;i++){
		if( (i+1+x)>n ) continue;
		tong+=a[i];
		tong+=catgo(a,n,x+i+1,tong);
	}	
	return tong;
}

int main(){
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}	
	int sum=0;
	catgo(a,n,0,sum);
	//sort(a.begin(),a.end());
	//cout<<a.back();
	
}

