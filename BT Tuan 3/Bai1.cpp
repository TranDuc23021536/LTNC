#include<bits/stdc++.h>
using namespace std;
struct Point
{
	int x,y;
};
void nhap(Point &p)
{
	cin >> p.x >> p.y;
}
void in(Point p)
{
	cout << p.x << " " << p.y;
}
int main()
{
	struct Point p;
	nhap(p);
	in(p);
}