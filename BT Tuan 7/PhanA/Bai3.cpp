#include<bits/stdc++.h>
using namespace std;
int count_even (int* a, int n) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0)
		count++;
	}
	return count;
}
int main() {
	int n = 10;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << count_even (a, n/2) << " " << count_even (a + n/2, n/2);
}