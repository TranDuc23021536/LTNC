#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin >> N;
	if(N == 1)
	cout << "Yes";
	else
	{
	int a[N];
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}
	bool check = false;
	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (a[j] ==  a[i])
			{
			check = true;
			break;
			}
		}
		if (check) {
			break;
		}
	}
	if (check)
	cout << "Yes";
	else
	cout << "No";
	}
}
