#include<bits/stdc++.h>
using namespace std;
void mang_ngau_nhien (int a[], int n) {
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 50;
	}
}
void in_ba_so (int a[], int n) {
	for (int i = 0; i < n - 2; i++) {
		for (int j  = i + 1; j < n - 1; j++) {
			for (int k = j + 1; k < n; k++) {
				if ((a[i] + a[j] + a[k]) % 25 == 0)
				cout << a[i] << " " << a[j] << " " << a[k] << endl;
			}
		}
	}
}
int main() {
	srand(time(NULL));
	int n; cin >>n;
	int a[n];
	mang_ngau_nhien(a, n);
	in_ba_so(a, n);
}