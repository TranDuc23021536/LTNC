#include <bits/stdc++.h>
using namespace std;

char* concat (const char* s1, const char* s2) {
	int len1 = strlen (s1);
	int len2 = strlen (s2);
	int len = len1 + len2;
	char* temp = new char [len + 1];
	strcpy (temp, s1);
	strcat (temp, s2);
	return temp;
}

int main() {
	const char* s1 = "Hello";
	const char* s2 = " World";
	char* temp = concat (s1, s2);
	cout << temp;
	delete[] temp;
	return 0;
}