#include<bits/stdc++.h>
using namespace std;
int  so_guong(int n) {
	vector <int> a;
	while(n) {
		a.push_back(n%10);
		n = n/10;
	}
	int l = 0;
	int r = a.size() - 1;
	while (l <= r) {
		if(a[l] != a[r])
		return 0;
		l++;
		r--;
	}
	return 1;
}
int main() {
	int TC;
	cin >> TC;
	while (TC--)
	{
		int a, b;
		cin >> a >> b;
		int dem = 0;
		for (int i = a; i <= b; i++)
		{
			if (so_guong(i))
			dem++;
		}
		cout << dem << endl;
	}
}