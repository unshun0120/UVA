#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
	int n, i, j, temp;
	
	while( cin >> n )
	{
		int arr[n], dif[n];
		
		for( i = 0; i < n; i++ )
			cin >> arr[i];
			
		for( i = 0; i < n; i++ )
		{
			if( i > 0) 
				dif[i] = abs( arr[i] - arr[i-1] );
		}
		for( i = 1; i < n; i++ )
		{
			for( j = 1; j < i; j++ )
			{
				if( dif[i] <= dif[j] )
				{
					temp = dif[i];
					dif[i] = dif[j];
					dif[j] = temp;	 
				}
			}
		}
		
		for( i = 1; i < n; i++ )
		{
			if( dif[i] != i )
			{
				cout << "Not jolly";
				break;
			}
		}
		if( i == n )
			cout << "Jolly";
		cout << "\n";
		
	}
	
	
}
