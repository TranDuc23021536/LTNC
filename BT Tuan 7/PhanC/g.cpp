#include<bits/stdc++.h>
using namespace std;
void trim_left (char a[]) {
	char* ptr = a;
	while (*ptr == ' ') {
		ptr++;
	}
	int i = 0;
	while (*ptr != '\0') {
		a[i++] = *ptr++;
	}
	a[i] = '\0';
}
int main() {
	char a[] = "                        duc";
	trim_left (a);
	cout << a;
}