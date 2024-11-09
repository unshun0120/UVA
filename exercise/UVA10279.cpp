#include<iostream>
using namespace std;

int main(){
	
	int i, j, testcnt, n, count=0;
	bool touch_mine=false;
	
	cin >> testcnt;
	getchar();
	while( testcnt-- ){
		cin >> n;
		
		char mine[n][n], user[n][n];
		int mine_cnt[n][n];
		
		for( i = 0; i < n; i++ )
			for( j = 0; j < n; j++ ){
				cin >> mine[i][j];
				if( mine[i][j] == '*' )
					mine_cnt[i][j] = -1;
				else
					mine_cnt[i][j] = 0;
			}
				
				
		for( i = 0; i < n; i++ )
			for( j = 0; j < n; j++ )
				cin >> user[i][j];
		
		for( i = 0; i < n; i++ ){		//計算周圍地雷數量 
			for( j = 0; j < n; j++ ){
				if( mine[i][j] == '.' ){
					if( mine[i-1][j-1] == '*' && (i-1)>=0 && (j-1)>=0 )
						mine_cnt[i][j]++;
					if( mine[i-1][j] == '*' && (i-1)>=0 )
						mine_cnt[i][j]++;
					if( mine[i-1][j+1] == '*' && (i-1)>=0 && (j+1)<n )
						mine_cnt[i][j]++;
					if( mine[i][j-1] == '*' && (j-1)>=0 )
						mine_cnt[i][j]++;
					if( mine[i][j+1] == '*' && (j+1)<n )
						mine_cnt[i][j]++;
					if( mine[i+1][j-1] == '*' && (i+1)<n && (j-1)>=0 )
						mine_cnt[i][j]++;
					if( mine[i+1][j] == '*' && (i+1)<n )
						mine_cnt[i][j]++;
					if( mine[i+1][j+1] == '*' && (i+1)<n && (j+1)<n )
						mine_cnt[i][j]++;
				}
			}
		}
		
		/*for( i = 0; i < n; i++ ){
			for( j = 0; j < n; j++ ){
				cout << mine_cnt[i][j] << " ";
			}
			cout << endl;
		}	*/
		
		touch_mine = false;
		for( i = 0; i < n; i++ ){
			for( j = 0; j < n; j++ ){
				if( user[i][j] == 'x' ){
					if( mine[i][j] == '*' ){
						touch_mine = true;
						break;
					}
				}
			}
			if( touch_mine )	
				break;
		}
		
		if( touch_mine ){	//踩到地雷
			for( i = 0; i < n; i++ ){ 
				for( j = 0; j < n; j++ ){
					cout << mine[i][j] << " ";
				} 
				cout << "\n";
			} 
		} 
		else{
			for( i = 0; i < n; i++ ){
				for( j = 0; j < n; j++ ){
					if( mine_cnt[i][j] == -1 || user[i][j] == '.' )	
						cout << ".";
					else 
						cout << mine_cnt[i][j];
				}
				if( i != n-1 )
					cout << "\n";
			}
		}
		
		
		
	}
	
	
	
} 
