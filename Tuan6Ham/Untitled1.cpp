#include <bits/stdc++.h>

using namespace std;
	void a(int *p) { *p++; cout<<*p;}
	void b(int *p) { (*p)++; 
	}
	void c(int p) { p++; }

	int main()
	{
	    int* p = new int[10];
	    *(p+2) = 100;
	    cout<<*p[2];

	}

	
