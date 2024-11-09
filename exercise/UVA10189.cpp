#include<iostream>
using namespace std;

int main()
{
	int n, m, i, j, f=0;
	
	while( cin >> n >> m )
	{
		if( n == 0 && m == 0 )
			break;
			
		f++;
		if( f != 1 )
			cout << "\n";
		char mine[n][m];
		int res[n][m];
		
		for( i = 0; i < n; i++ )	//input & initialize
		{
			for( j = 0; j < m; j++ )
			{
				cin >> mine[i][j];
				if( mine[i][j] == '*' )
					res[i][j] = -1;
				else
					res[i][j] = 0;				
			}
		}
		
		for( i= 0; i < n; i++ )
		{
			for( j = 0; j < m; j++ )
			{
				if( mine[i][j] == '.' )		//以不是地雷來做 
				{
					if( mine[i-1][j-1] == '*' && (i-1)>=0 && (j-1)>=0 )
					{
						res[i][j]++;
						//cout << i-1 << " " << j-1 << " " << res[i][j] << endl;
					}
					if( mine[i-1][j] == '*' && (i-1)>=0 )
					{
						res[i][j]++;
						//cout << i-1 << " " << j << " " << res[i][j] << endl;
					}
					if( mine[i-1][j+1] == '*' && (i-1)>=0 && (j+1)<m )
					{
						res[i][j]++;
					//	cout << i-1 << " " << j+1 << " " << res[i][j] << endl;
					}
					if( mine[i][j-1] == '*' && (j-1)>=0 )
					{
						res[i][j]++;
						//cout << i << " " << j-1 << " " << res[i][j] << endl;
					}
					if( mine[i][j+1] == '*' && (j+1)<m )
					{
						res[i][j]++;
						//cout << i << " " << j+1 << " " << res[i][j] << endl;
					}
					if( mine[i+1][j-1] == '*' && (i+1)<n && (j-1)>=0 )
					{
						res[i][j]++;
						//cout << i+1 << " " << j-1 << " " << res[i][j] << endl;
					}
					if( mine[i+1][j] == '*' && (i+1)<n )
					{
						res[i][j]++;
						//cout << i+1 << " " << j << " " << res[i][j] << endl;
					}
					if( mine[i+1][j+1] == '*' && (i+1)<n && (j+1)<m )
					{
						res[i][j]++;
						//cout << i+1 << " " << j+1 << " " << res[i][j] << endl;
					}
				}
			}
		}
		
		cout << "Field #" << f << ":\n";
		for( i = 0; i < n; i++ )
		{
			for( j = 0; j < m; j++ )
			{
				if( res[i][j] == -1 )
					cout << "*";
				else 
					cout << res[i][j];
			}
			cout << "\n";
		}
		
	}
	
	
} 








