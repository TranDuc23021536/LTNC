#include<bits/stdc++.h>
using namespace std;
string f(int n)
{
    if (n == 0) return "a";
    if (n == 1) return "b";
    return f(n - 1) + f(n - 2);
}
int main()
{
	for(int i = 0; i < 10; i++)
	{
		cout << f(i) << " ";
	}
}