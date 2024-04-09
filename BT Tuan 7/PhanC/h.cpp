#include<bits/stdc++.h>
using namespace std;
void trim_right (char a[]) {
	char* ptr = a + strlen (a) - 1;
	while (ptr >= a && *ptr == ' ') {
		ptr--;
	}
	*(ptr + 1) = '\0';
}
int main() {
	char a[] = "duc                      ";
	trim_right (a);
	cout << a;
}