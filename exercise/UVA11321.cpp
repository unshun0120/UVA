#include<iostream>
using namespace std;

int main()
{
	int N, M, i, j, temp;
	
	while( cin >> N >> M )
	{
		if( N == 0 && M == 0 )
			break;
		
		int num[N]={0};
	
		for( i = 0; i < N; i++ )
			cin >> num[i];
	
		for( i = 0; i < N; i++ )
		{
			for( j = 0; j < N - i - 1; j++ )
			{
				if( num[j]%M > num[j+1]%M )
				{
					temp = num[j];
					num[j] = num[j+1];
					num[j+1] = temp;
				}
				else if( num[j]%M == num[j+1]%M )
				{
					if( num[j]%2 != 0 && num[j+1]%2 != 0 )
					{
						if( num[j] < num[j+1] )
						{
							temp = num[j];
							num[j] = num[j+1];
							num[j+1] = temp;
						}
					}
					else if( num[j]%2 == 0 && num[j+1]%2 == 0 )
					{
						if( num[j] > num[j+1] )
						{
							temp = num[j];
							num[j] = num[j+1];
							num[j+1] = temp;
						} 
					}
					else if( num[j]%2 == 0 && num[j+1]%2 != 0 )
					{
						temp = num[j];
						num[j] = num[j+1];
						num[j+1] = temp;	
					}
				}
			}
		}
		
		cout << N << " " << M << "\n";
		for( i = 0; i < N; i++ )
			cout << num[i] << "\n";
	}
	cout << "0 0\n";
	
} 








