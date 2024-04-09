#include<bits/stdc++.h>
using namespace std;
void pad_left (char a[], int n) {
	char *ptr = a;
	int len = strlen (a);
	while (*ptr != '\0') {
		ptr++;
	}
	while (ptr >= a) {
		*(ptr + (n - len)) = *ptr;
		ptr--;
	}
	for (int i = 0; i < (n - len); i++) {
        a[i] = ' ';
    }
}
int main() {
	char a[] = "duc";
	int n = 10;
	pad_left (a, n);
	cout << a << " " << strlen(a);
}