#include<iostream>
using namespace std;

int main()
{
	int i, j, k, count=0, n, max;
	
	while( cin >> i >> j )
	{
		cout << i << " " << j << " ";
		count = 1;
		max = 0;
		if( i <= j )
		{
			for( k = i; k <= j; k++ )
			{
				n = k;
				count = 1;
				while( n != 1 )
				{
					if( n % 2 == 1 )
						n = 3*n + 1;
					else
						n = n/2;
						
					count++;
				} 
				
				if( count > max )
					max = count;
					
			}
		}
		else 
		{
			for( k = j; k <= i; k++ )
			{
				n = k;
				count = 1;
				while( n != 1 )
				{
					if( n % 2 == 1 )
						n = 3*n + 1;
					else
						n = n/2;
						
					count++;
				} 
				
				if( count > max )
					max = count;
					
			}
		}
		
		
		cout << max << "\n";
	}
	
	
}
