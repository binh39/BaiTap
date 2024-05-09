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

struct Rect{
	int x,y;
	int w,h;
	bool contains(Point p){
		if((x<=p.x&&p.x<=x+w)&&(y-h<=p.y&&p.y<=y)) return true;
		else return false;
	}
};

struct Ship{
	Rect a;
	string id;
	int dx;
	int dy;
	
	Ship(){
		a.x = 0;
		a.y = 0;
		a.w = 0;
		a.h = 0;
		id = "binhship";
		dx = 10;
		dy = 10;
	}
	
	Ship(int x_, int y_, int dx_, int dy_){
		a.x = x_;
		a.y = y_;
		dx = dx_;
		dy = dy_;
	}
	
	void move(){
		a.x+=dx;
		a.y+=dy;
	}
};
void display(const Ship& ship){
	cout<<ship.id<<endl;
	cout<<ship.a.x<<" "<<ship.a.y<<endl;
}

int main(){
	Ship a(1,2,9,8);
	Ship b(4,6,2,4);
	for(int i=1 ; i<=10 ; i++){
		a.move(); b.move();
		display(a); display(b);
	}
}