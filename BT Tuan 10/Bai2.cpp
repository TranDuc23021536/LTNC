#include<bits/stdc++.h>
using namespace std;
int main () {
	int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p; 
    *p2 = 100; // dòng này là dòng gây lỗi, bởi p và p2 đang trỏ tới cùng 1 vùng nhớ, mà dòng trên đã giải phóng vùng nhớ được trỏ bởi p nên việc truy cập vào vùng nhớ đã được giải phóng bằng *p2 gây lỗi.
    cout << *p2;
    delete p2;
}