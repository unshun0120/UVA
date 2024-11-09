#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
	int r, n, i, mid, sum=0;
	
	cin >> r;
	
	while( r-- )
	{
		cin >> n;
		int s[n];
		
		sum = 0;	
		for( i = 0; i < n; i++ )
			cin >> s[i];
		
		sort( s, s+n);
		
		if( n%2 == 0 )
		{
			if( n == 2 )
				mid = ( s[0] + s[1] ) / 2;
			else
				mid = ( s[ n/2 ] + s[ n/2-1 ] ) / 2;
		}	
		else
			mid = s[ (n+1)/2 - 1 ];
		
		for( i = 0; i < n; i++ )
			sum += abs( mid - s[i] );
		
		cout << sum << "\n";
	}	
	
	
}
