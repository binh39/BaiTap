#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin>>n;
	int a,b;
	int x=99999,y=99999;
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		if(a==1 || b==1) continue;
		if(x>a) x=a;
		if(y>b) y=b;
	}	
	cout<<(x-1)*(y-1);
}
