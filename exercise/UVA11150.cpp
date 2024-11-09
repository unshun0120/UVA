#include<iostream>
using namespace std;

int main()
{
	int n, change, drink=0;
	
	while( cin >> n )
	{
		drink = 0;
		while( n >= 3 )
		{
			change = n / 3;
			drink += 3*change; 
			n = n - 3*change + change;
		}
		drink += n;
		
		cout << drink + n/2 << "\n"; 
		
	}
	
	
}
