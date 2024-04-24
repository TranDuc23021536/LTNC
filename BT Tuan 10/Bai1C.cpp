#include <bits/stdc++.h>
using namespace std;

int dem (const char* a, const char* b) {
    int len1 = strlen(a);
    int len2 = strlen(b);
    int count = 0;
    for(int i = 0; i < len2; i++) {
        char *c = new char[len1];
        for(int j = 0; j < len1; j++) {
            *(c+j) = *(b+i+j);
        }
        if (strcmp(a, c) == 0) {
            count++;
            i+=2;
        }
        delete[] c;
    }
    return count;
}
int main(){
    const char a[] = "duc";
    const char b[] = "duchwhwhduc";
    cout << dem(a, b);
    return 0;
}