#include<bits/stdc++.h>
using namespace std;
struct Point
{
	int x, y;
};
void nhap(Point &p)
{
	cin >> p.x >> p.y;
}
Point mid_point(const Point a,const Point b)
{
	Point p;
	p.x = (a.x + b.x)/2;
	p.y = (a.y + b.y)/2;
	return p;
}
void in(Point p)
{
	cout << p.x << " " << p.y;
}
int main()
{
	Point a, b;
	nhap(a);
	nhap(b);
	in(mid_point(a,b));
}