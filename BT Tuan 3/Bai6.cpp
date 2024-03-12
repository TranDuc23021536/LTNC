#include<bits/stdc++.h>
using namespace std;
struct Rect
{
	int x, y, w, h;
};
struct Ship
{
	Rect tau;
	string id;
	double dx, dy;
	void move()
	{
		tau.x += dx;
		tau.y += dy;
	}
};
void display(const Ship &ship)
{
	cout << ship.id << " " << ship.tau.x << " - " << ship.tau.y;
}
int main()
{
	Ship ship;
	cin >> ship.id >> ship.tau.x >> ship.tau.y >> ship.dx >> ship.dy;
	ship.move();
	display(ship);
}