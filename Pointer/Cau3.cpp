#include <bits/stdc++.h>

using namespace std;

void f(int* a){
	cout<<sizeof(a)<<endl;
}

int counteven(int* a, int n){
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0) dem++;
	}
	return dem;
}


int main(){
	int a[]={1,2,3,4,5,6,7,8,8,8};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<counteven(a,n);
	//5 phan tu dau mang thi i=0 den i<5
	//5 phan tu cuoi mang thi i=n-1 den i=n-6
}

