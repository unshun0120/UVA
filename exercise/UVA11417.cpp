#include<iostream>
using namespace std;

int GCD( int i, int j )
{
	while( i != 0 && j != 0 )
	{
		if( i > j )
		{
			i %= j;
		}
		else
		{
			 j %= i;
		}
	}	
	
	if( i != 0 )
		return i;
	else
		return j;
	
} 

int main()
{
	int i, j, N, G=0;
	
	while( cin >> N )
	{
		if( N == 0 )
			break;
		
		G = 0;
		for( i = 1; i < N; i++ )
		{
			for( j = i + 1; j <= N; j++ )
			{
				G += GCD(i, j);		
			}		
		}		
		
		cout << G << "\n"; 
		
	}	
	
	
	
} 
