#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x; 
	cin >> x;
    int y = x;
    cout << x << " ";
    while(cin >> x && x != -1)
    {
    	if(x != y)
    	{
    		cout << x << " ";
    		y = x;
		}
	}
}