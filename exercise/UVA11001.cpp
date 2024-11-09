#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;

int main()
{
	
	int v, v0, i;
	double d, max, maxlens, lens;
	
	while( cin >> v >> v0 )	
	{
		if( v == 0 && v0 == 0 )
			break;
			
		max = 0;
		maxlens = 0;
		for( i = 1; i < v; i++ )
		{
			if( (v/i - v0) <= 0 )
				break;
			d = 0.3*sqrt( (double)v/i - v0 )*i;
			
			//compare 福點數比較會有誤差故使用fabs 
			if( fabs(maxlens-d) <= 1e-10 )	// e.g. 1e-4=0.0001 => 誤差在1e-10則視為相同 
			{
				max = 0;
				break;
			}
			else if( d > maxlens )
			{
				maxlens = d;
				max = i;
			}
			//cout << i << " : " << d << " : " << maxlens<< endl;
		}
		
		cout << max << "\n";
		
	}
	
	
	
} 
