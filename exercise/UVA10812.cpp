#include<iostream>
using namespace std;

int main()
{
	int n, s, d, a, b;
	
	cin >> n;
	while( n-- )
	{
		cin >> s >> d;
		if( (s+d)%2 != 0 )
		{
			cout << "impossible\n";
		}
		else
		{
			a = (s+d)/2;
			b = s-a;
			if( b < 0 )
				cout << "impossible\n";
			else
			{
				cout << a << " " << b << "\n";
			}
		}
		
		
	}
	
	
}
