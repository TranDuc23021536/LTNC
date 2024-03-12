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
	cout << ship.id << " " << ship.tau.x << " - " << ship.tau.y << endl;
}
int main()
{
	Ship ship1;
	Ship ship2;
	cin >> ship1.id >> ship1.tau.x >> ship1.tau.y >> ship1.dx >> ship1.dy;
	cin >> ship2.id >> ship2.tau.x >> ship2.tau.y >> ship2.dx >> ship2.dy;
	int loop = 0;
	while (loop < 10)
	{
	ship1.move(); ship2.move();
    display(ship1); display(ship2);
    loop++;
	}
}
