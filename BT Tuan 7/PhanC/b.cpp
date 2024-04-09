#include<bits/stdc++.h>
using namespace std;
void delete_char (char a[], char c) {
	int len = strlen (a);
	int k = 0;
	for (int i = 0; i < len; i++) {
		if (a[i] != c) {
			a[k] = a[i];
			k++;
		}
	}
	a[k] = '\0';
}
int main() {
	char a[] = "duchehe";
	char c = 'c';
	delete_char (a, c);
	cout << a;
}