#include<iostream>
using namespace std;

int main()
{
	int n, c, i, j, index=0, median, temp, start;
	int prime[1000];
	
	while( cin >> n >> c )
	{
		prime[1] = 1;
		index = 2;
		temp = 0;
		for( i = 2; i <= n; i++)
		{
			for( j = 2; j < i; j++ )
			{
				if( i%j == 0 )
					break;
			}
			if( j == i )
			{
				prime[index] = i;
				index++;
			}
		}
		index--;
		
		/*for( i = 1; i < index; i++ )
			cout << prime[i] << endl;*/
		cout << n << " " << c << ":";
		if( index%2 != 0 )
		{
			median = (index+1)/2;
			c = c*2-1;
			start = (c-1)/2;
			if( c >= index )
				for( i = 1; i <= index; i++)
				cout << " " << prime[i]; 
			else
				for( i = median-start; i <= median+start; i++)
					cout << " " << prime[i]; 
			cout << "\n";
		}
		else
		{
			median = index/2;
			c *= 2;
			start = c/2;
			if( c >= index )
				for( i = 1; i <= index; i++)
					cout << " " << prime[i]; 
			else
				for( i = median-start+1; i <= median+start; i++)
					cout << " " << prime[i]; 
			cout << "\n";
		}
		cout << "\n";
	}
	
	
}
