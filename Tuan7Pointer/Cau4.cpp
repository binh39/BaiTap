#include <bits/stdc++.h>

using namespace std;

void NhiPhan(int* a,int n, int k);

int main(){
	int n; cin>>n;
	int a[n];
	for(int i=1;i<=n;i++){
		a[i-1]=i;
	}
	int k; cin>>k;
	NhiPhan(a,n,k);
}

void NhiPhan(int* a,int n, int k){
	int left=0,right=n-1;
	int mid = (left+right)/2;
	int index;
	while(left!=right){
		if(a[mid]>k){
			right=mid-1;
			mid=(left+right)/2;
		}
		else if(a[mid]<k){
			left=mid+1;
			mid=(left+right)/2;
		}
		else{
			break;
		}
	}
	cout<<mid+1<<a[mid];
}
