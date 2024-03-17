#include<bits/stdc++.h>
using namespace std;
int doixung (string s) {
	int l = 0;
	int r = s.size() - 1;
	while ( l <= r) {
		if (s[l] != s[r])
		return 0;
		l++;
		r--;
	}
	return 1;
}
int main() {
	string s;
	cin >> s;
	if (doixung(s))
	cout << "Yes";
	else
	cout << "No";
}