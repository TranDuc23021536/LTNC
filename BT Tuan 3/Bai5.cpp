#include<bits/stdc++.h>
using namespace std;
struct Point {
  int x;
  int y;
};

struct Rect {
  int x;
  int y;
  int w;
  int h;

  bool contains(const Point& point) const {
    return (point.x >= x && point.x <= x + w && point.y <= y && point.y >= y + h);
  }
};
int main()
{
	Rect rect;
	cin >> rect.x >> rect.y >> rect.w >> rect.y;
	Point p;
	cin >> p.x >> p.y;
	cout << rect.contains(p);
}