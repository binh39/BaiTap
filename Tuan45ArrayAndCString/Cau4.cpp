#include <bits/stdc++.h>

using namespace std;

int n,m;

int main(){
	cin>>n>>m;
	char a[n+2][m+2]={0};
	
	for(int i=1;i<n+1;i++){
		for(int j=1;j<m+1;j++){
			cin>>a[i][j];
		}
	}
	
	for(int i=1 ; i<n+1 ; i++){
		for(int j=1 ; j<m+1 ; j++){
			if(a[i][j] == '.'){
				int count=0;
				for(int k=i-1;k<=i+1;k++){
					for(int l=j-1;l<=j+1;l++){
						if(a[k][l]=='*') count++;
					}
				}
				cout<<count<<" ";
			}
			else cout<<"*"<<" ";
		}
		cout<<endl;
	}
}

