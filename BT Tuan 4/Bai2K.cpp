#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[n];
	int tong_chan = 0;
	int tong_le = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] % 2 == 0)
		tong_chan += a[i];
		else
		tong_le += a[i];
	}
	sort (a, a + n);
	cout << a[0] << " " << a[n - 1] << " " << tong_chan << " " << tong_le;
}