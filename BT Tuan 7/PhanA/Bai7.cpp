#include<bits/stdc++.h>
using namespace std;
int main(int argc, char* argv[]) {
	char* str1 = argv[1];
	char* str2 = argv[2];
	int count = 0;
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	for (int i = 0; i <= len2 - len1; i++) {
		if (strcmp(str1, str2 + i) == 0) {
			count++;
		}
	}
	cout << count;
	return 0;
}