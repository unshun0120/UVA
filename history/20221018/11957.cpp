#include<iostream>
using namespace std;

int main(){

	long long i, j, t, size, ans = 0, test=0;
	
	cin >> t;
	
	while( t-- ){
		cin >> size;
		char ch[size][size];
		long long dp[size+1][size+1]={0};
				
		for( i = 0; i < size; i++ ){
			for( j = 0; j < size; j++ ){
				cin >> ch[i][j];
				dp[i][j] = 0;
			}
		}
		
		for( i = size-1; i >= 0; i-- ){
			for( j = 0; j < size; j++ ){
				if( ch[i][j] == 'W'){
					dp[i][j] = 1;
					continue;
				}
				
				if( ch[i][j] == 'B' ){
					continue;
				}
				
				if( i+1 < size && j+1 < size && ch[i+1][j+1] != 'B' ){
					dp[i][j] += dp[i+1][j+1];
				}
				
				if( i+1 < size && j-1 >= 0 && ch[i+1][j-1] != 'B' ){
					dp[i][j] += dp[i+1][j-1];
				}
				
				if( i+1 < size && j+1 < size && ch[i+1][j+1] == 'B' ){
					if( i+2 < size && j+2 < size && ch[i+2][j+2] != 'B' )
						dp[i][j] += dp[i+2][j+2];
				}
				
				if( i+1 < size && j-1 >= 0 && ch[i+1][j-1] == 'B' ){
					if( i+2 < size && j-2 >= 0 && ch[i+2][j-2] != 'B' )
						dp[i][j] += dp[i+2][j-2];
				}
				
				dp[i][j] %= 1000007;
			}
		}
		
		ans = 0;
		for( i = 0; i < size; i++ ){
			if( ch[0][i] != 'B' ){
				ans += dp[0][i];
				ans %= 1000007;
			}
		}
		
		cout << "Case " << ++test << ": " << ans << endl;
	}

}

