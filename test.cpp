#include <bits/stdc++.h>

using namespace std;

struct Node{
	int value;
	Node* next;
	Node (int val, Node* next_){
		value = val;
		next = next_;
	}
};

struct Slist{
	Node* head = nullptr;
};

int main(){
	int a[6] = {1, 2, 3};
	int *b; b = &a[0];
	for (int i=0; i<3; i++)
	    switch (i%3) {
	        case 0: *(b+i) = a[i]; break;
	        case 1: *(b++) = a[i]; break;
	        case 2: *(++b) = a[i]++; break;
	    }
	for (int i=0; i<3; i++) cout << a[i] << " ";

}
