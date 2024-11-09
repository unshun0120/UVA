#include<iostream>
using namespace std;

int main()
{
	int testCase, n, i, h=0, s=0, j;
	
	cin >> testCase;
	for( j = 1; j <= testCase; j++ )
	{
		h = 0;
		s = 0;
		cin >> n;
		int wall[n];
		
		for( i = 0; i < n; i++ )
			cin >> wall[i];
		
		for( i = 0; i < n-1; i++ )
		{
			if( wall[i] < wall[i+1] )
				h++;
			else if( wall[i] > wall[i+1] )
				s++;
		}
		
		cout << "Case " << j << ": " << h << " " << s << "\n";
		
	}
	
	
	
	
}
