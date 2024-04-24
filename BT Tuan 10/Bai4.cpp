#include <bits/stdc++.h>
using namespace std;
int main() {
  int a= 10;
  int* ptr = &a;

  cout << a << endl;
  cout << ptr << endl;
  delete ptr;

  // Lỗi xảy ra tại đây
  // Truy cập vào biến địa phương 'a' sau khi giải phóng vùng nhớ
  a = 20;

  cout << a << endl;

  return 0;
}