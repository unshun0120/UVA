#include<iostream>
using namespace std;

int main()
{
	int n, i, f;
	double area, num, level, ans, average, money;
	
	cin >> n;
	while( n-- )
	{
		ans = 0;
		cin >> f;
		for( i = 0; i < f; i++ )
		{
			cin >> area >> num >> level;
			average = area/num;
			money = average*level;
			ans += money*num;
		}
		
		cout << ans << "\n";
		
		
	}
	
	
}
