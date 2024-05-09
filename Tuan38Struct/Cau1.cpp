#include <bits/stdc++.h>

using namespace std;

struct Point{
	int x,y;
};

void print(Point p){
	cout<<p.x<<" "<<p.y<<endl;
}

Point mid_point(const Point& p1, const Point& p2){
	Point a;
	a.x = (p1.x+p2.x)/2;
	a.y = (p1.y+p2.y)/2;
	return a;
}

int main(){
	Point p;
	p.x=0;
	p.y=0;
	print(p);
}