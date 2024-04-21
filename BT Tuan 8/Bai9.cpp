#include <bits/stdc++.h>
using namespace std; 

struct Point {
    int x;
    int y;
};
void nhap (Point &point) {
	cin >> point.x >> point.y;
}

void truyen_tham_tri (Point p) {
    cout << "Trong ham dia chi cua p: " << &p << endl;
    p.x = p.x + 10;
    p.y = p.y + 10;
    cout << "x = " << p.x << ", y = " << p.y << endl;
}

void truyen_tham_chieu (Point &p) {
    std::cout << "Trong ham dia chi cua p: " << &p << endl;
    p.x = p.x + 10;
    p.y = p.y + 10;
    cout << "x = " << p.x << ", y = " << p.y << endl;
}

int main() {
    Point point;
	
	nhap (point);
	
    cout << "Truoc khi goi ham - Dia chi cua point: " << &point << endl;

    truyen_tham_tri (point);

    cout << "Sau khi goi ham truyen_tham_tri - x = " << point.x << ", y = " << point.y << endl;

    truyen_tham_chieu (point);

    cout << "Sau khi goi ham truyen_tham_bien - x = " << point.x << ", y = " << point.y << endl;

    return 0;
}