#include<bits/stdc++.h>
using namespace std;
int so_ngau_nhien_nho_hon_n (int n) {
	return rand() % n;
}
int main() {
	srand(time(NULL));
	int n; cin >> n;
	cout << so_ngau_nhien_nho_hon_n(n);
}