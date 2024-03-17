#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[n];
	int dem1 = 0, dem2 = 0, dem3 = 0, dem4 = 0, dem5 = 0, dem6 = 0, dem7 = 0, dem8 = 0, dem9 = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		switch (a[i]) {
			case 1:
				dem1++;
				break;
			case 2:
				dem2++;
				break;
			case 3:
				dem3++;
				break;
			case 4:
				dem4++;
				break;
			case 5:
				dem5++;
				break;
			case 6:
				dem6++;
				break;
			case 7:
				dem7++;
				break;
			case 8:
				dem8++;
				break;
			case 9:
				dem9++;
				break;
		}
	}
	cout << dem1 << endl << dem2 << endl << dem3 << endl << dem4 << endl << dem5 << endl << dem6 << endl << dem7 << endl << dem8 << endl << dem9;
}