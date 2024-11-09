//«Øªí 
#include<iostream>
using namespace std;

int main()
{
	int n, i, j, sub;
	int x[10001], y[10001];
	bool find[10001];
	
	for( i = 1; i < 60; i++ )
	{
		for( j = 1; j < i; j++ )
		{
			sub = i*i*i - j*j*j;
			if( sub <= 10000 )
			{
				if( find[sub] )
				{
					if( j < y[sub] )
					{
						x[sub] = i;
						y[sub] = j;
					}
				}
				else
				{
					x[sub] = i;
					y[sub] = j;
					find[sub] = true;
				}
			}
		}
	}
	
	while( cin >> n )
	{
		if( n == 0 )
			break;
		
		if( find[n] )
			cout << x[n] << " " << y[n] << "\n";
		else
			cout << "No solution\n";
	}
	
	
	
}
