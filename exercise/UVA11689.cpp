#include<iostream>
using namespace std;

int main()
{
	int testCase, e, f, c, sum=0, emp;
	
	cin >> testCase;
	while( testCase-- )
	{
		sum = 0;
		cin >> e >> f >> c;
		emp = e+f;
		sum += emp/c;
		emp = emp/c + emp%c;
		while( emp >= c )
		{
			sum += emp/c;
			emp = emp/c + emp%c;
		}
		 
		cout << sum << "\n";
	}
	
}
