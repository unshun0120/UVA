#include<iostream>
using namespace std;

int main()
{
	int test, a, b, i, sum=0, testCase=0;
	
	cin >> test;
	while( test-- )
	{
		sum = 0;
		testCase++;
		cin >> a >> b;
		for( i = a; i <= b; i++ )
		{
			if( i % 2 != 0 )
				sum += i;
		}
		cout << "Case " << testCase << ": " << sum << "\n";
		
		
	}
	
}
