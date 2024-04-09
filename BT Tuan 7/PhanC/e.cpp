#include<bits/stdc++.h>
using namespace std;
void truncate (char a[], int n) {
	char* ptr = a;
	int len = strlen (a);
	if (len > n) {
		for (int i = 0; i < n; i++) {
			ptr++;
		}
		*ptr = '\0';
	}
}
int main() {
	char a[] = "ducdeptrai";
	int n = 6;
	truncate (a, n);
	cout << a << " " << strlen(a);
}