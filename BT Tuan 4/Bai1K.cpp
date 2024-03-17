#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	double a[n];
	double tong = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		tong += a[i];
	}
	double tb = tong / n;
	double ps = pow(tong - tb, 2) / n;
	cout << (double)tb << " " << ps;
}