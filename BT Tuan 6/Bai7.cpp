#include<bits/stdc++.h>
using namespace std;
void ve_tam_giac (int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++)
		cout << " ";
		for ( int k = 1; k <= 2*i - 1; k++)
		cout << "*";
		cout << endl;
	}
}
int main() {
	int n;
	cin >> n;
	ve_tam_giac(n);
}