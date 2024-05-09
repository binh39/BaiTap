#include <bits/stdc++.h>

using namespace std;

void Prime(int n){
	bool check =true;
	if(n==2||n==3) cout<<"yes"<<endl;
	else if(n<2) cout<<"no"<<endl;
	else{
		for(int i=2;i*i<=n;i++){
			if(n%i==0) check=false;
		}
		if(check) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
}

void InPhai(int n){
	for(int i= 0; i<n ; i++){
		for(int j=0 ; j<i ; j++){
			cout<<" ";
		}
		for(int k=0;k<n-i;k++){
			cout<<"*";
		}
		cout<<endl;
	}
}

void InXuoi(int n){
	for(int i=1;i<=n;i++){
		for(int j=n-i;j>0;j--){
			cout<<" ";
		}
		for(int j=1 ; j<=2*i-1 ; j++ ){
			cout<<"*";
		}
		
		cout<<endl;
	}
}

void InNguoc(int n){
	for(int i=n;i>0;i--){
		for(int j=n-i;j>0;j--){
			cout<<" ";
		}
		for(int j=1 ; j<=2*i-1 ; j++ ){
			cout<<"*";
		}
		
		cout<<endl;
	}
}

int main(){
	InPhai(5);  cout<<endl;
	InXuoi(5);	cout<<endl;
	InNguoc(5); cout<<endl;
}
