#include<bits/stdc++.h>
using namespace std;
//void pad_right (char a[], int n) {
//	int len = strlen (a);
//	if (len < n) {
//		for (int i = len; i < n; i++) {
//			a[i] = ' ';
//		}
//		a[n] = '\0';
//	}
//}
void pad_right (char a[], int n) {
	char* ptr = a;
	while (*ptr != '\0') {
		ptr++;
	}
	int temp = n - (ptr - a);
	if (temp > 0) {
		for (int i = 0; i < temp; i++) {
			*ptr = ' ';
			ptr++;
		}
		*ptr = '\0';
	}
}
int main() {
	char a[] = "duc";
	int n = 10;
	pad_right (a, n);
	cout << a << " " << strlen(a);
}