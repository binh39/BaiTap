#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin>>n;
	int a[n][n]={0};
	//int a[0][n/2]=1;
	int dem=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[i][j]=0;
		}
	}

	int i=0,j=n/2;
	
	while(dem<=n*n){	
		a[i][j]=dem;
		dem++;
		if(a[(i-1+n)%n][(j+1+n)%n]){
			i=(i+1+n)%n;
		}
		else{
			i=(i-1+n)%n;
			j=(j+1+n)%n;
		}
		
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<setw(3)<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
}