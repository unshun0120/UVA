#include<iostream>
using namespace std;

int main()
{
	long long int n, m=0, i, j, max=0, temp;
	
	while( cin >> n )
	{
		long long int arr[n];
		
		m++;
		max = 0;
		for( i = 0; i < n; i++ )
			cin >> arr[i];
		for( i = 0; i < n; i++ )
		{
			temp = 1;
			for( j = i; j < n; j++ )
			{
				temp *= arr[j];
				if( temp > max )
					max = temp;
			}
			
		}
		cout << "Case #" << m << ": The maximum product is " << max << ".\n\n";
	}
	
	
}
