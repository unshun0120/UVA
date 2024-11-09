#include<iostream>
using namespace std;

int main()
{
	long long int n, sum=0;
	
	while( cin >> n )
	{
		if( n == 0 )
			break;
			
		sum = 0;	
		while( n >= 10 )
		{
			sum = 0;
			while( n > 0 )
			{
				sum += n%10;
				n /= 10;
			}	
			n = sum;
		}
		
		cout << n << "\n";
		
	}
	
		
	
	
} 
