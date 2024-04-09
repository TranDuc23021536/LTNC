#include<bits/stdc++.h>
using namespace std;
int binary_search (int* a, int size, int target) {
	int left = 0;
	int right = size - 1;
	if (a[left] == target) {
		return left;
	}
	while (left <= right) {
		int mid = left + (right - left)/2;
		if (a[mid] == target) {
			return mid;
		}
		else if (a[mid] < target) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	return -1;
}
int main() {
	int size;
	cin >> size;
	int a[size];
	for (int i = 0; i < size; i++) {
		cin >> a[i];
	}
	int target = 5;
	if (binary_search (a, size, target) != -1) {
		cout << "target o vi tri: " << binary_search (a, size, target);
	}
	else {
		cout << "No found";
	}
}