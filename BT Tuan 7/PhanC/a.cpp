#include<bits/stdc++.h>
using namespace std;
void reverse (char a[]) {
	int len = strlen(a);
	char temp;
	for (int i = 0; i < len/2; i++) {
		temp = a[len - i -1];
		a[len - i - 1] = a[i];
		a[i] = temp;
	}
}
int main() {
	char a[] = "duc";
	reverse (a);
	cout << a;
}