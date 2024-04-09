#include<bits/stdc++.h>
using namespace std;
bool is_palindrome (char a[]) {
	char* ptr1 = a;
	char* ptr2 = a + strlen(a) - 1;
	while (ptr1 < ptr2) {
		if (*ptr1 != *ptr2) {
			return false;
		}
		ptr1++;
		ptr2--;
	}
	return true;
}
int main() {
	char a[] = "dud";
	char b[] = "ducdeptraii";
	cout << is_palindrome (a) << endl << is_palindrome (b); 
}