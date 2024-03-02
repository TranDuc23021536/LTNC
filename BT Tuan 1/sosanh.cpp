#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[1001];
	for(int i = 0; i < 4; i++)
	{
		cin >> a[i];
	}
	sort(a,a+5);
	cout << a[2];
}