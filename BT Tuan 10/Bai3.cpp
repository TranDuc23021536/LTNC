
#include<bits/stdc++.h>
using namespace std;
int main () {
char* a = new char[10];
char* c = a + 3;
for (int i = 0; i < 9; i++) a[i] = 'a'; 
a[9] = '\0';
cerr <<"a: " << "-" << a << "-" << endl;
cerr <<"c: " << "-" << c << "-" << endl;
delete c;
cerr << "a after deleting c:" << "-" << a << "-" << endl; // Dòng này lỗi, lỗi xảy ra do truy cập vào vùng nhớ đã được giải phóng. Sau khi giải phóng vùng nhớ được trỏ bởi c, con trỏ a vẫn trỏ đến cùng vùng nhớ đó.
}