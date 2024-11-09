#include<iostream>
#include<string>
using namespace std;

int main(){
	
	int endx, endy, i, j, x, y;
	char dir;
	string arr;
	bool fall = false;
	
	while( cin >> endx >> endy ){
		int plan[endy+1][endx+1];	
		
		for( i = 0; i < endy+1; i++ )	//initial
			for( j = 0; j < endx+1; j++ )
				plan[i][j] = 0;
			
		while( cin >> x >> y >> dir ){
			cin >> arr;
			fall = false;
			
			for( i = 0; i < arr.length(); i++ ){
				if( arr[i] == 'L' ){
					if( dir == 'N' )
						dir = 'W';
					else if( dir == 'S' )
						dir = 'E';
					else if( dir == 'W' )
						dir = 'S';
					else if( dir == 'E' )
						dir = 'N'; 
				}
				else if( arr[i] == 'R' ){
					if( dir == 'N' )
						dir = 'E';
					else if( dir == 'S' )
						dir = 'W';
					else if( dir == 'W' )
						dir = 'N';
					else if( dir == 'E' )
						dir = 'S'; 
				}
				else if( arr[i] == 'F' ){
					if( dir == 'N' ){
						if( y+1 > endy ){	//檢查往上走會不會掉下去 若慧則記錄該點 
							if( plan[y][x] == 1 )	//遇到先前有人掉下去的點就不做該指令 
								continue;
							else{
								fall = true;	 
								plan[y][x] = 1;
								break;
							}
						} 
						else
							y += 1;
					}
					else if( dir == 'S' ){
						if( y-1 < 0 ){
							if( plan[y][x] == 1 )
								continue;
							else{
								fall = true;
								plan[y][x] = 1;	
								break;
							}
						}
						else
							y -= 1;
					}
					else if( dir == 'E' ){
						if( x+1 > endx ){
							if( plan[y][x] == 1 )
								continue;
							else{
								fall = true;
								plan[y][x] = 1;
								break;
							}
						}
						else
							x += 1;
					}
					else if( dir == 'W' ){
						if( x-1 < 0 ){
							if( plan[y][x] == 1 )
								continue;
							else{
								fall = true;
								plan[y][x] = 1;
								break;
							}
						}
						else
							x -= 1;
					}
				}
			}
			
			cout << x << " " << y << " " << dir;
			if( fall == true )
				cout << " LOST\n";
			else
				cout << "\n";
		}
	}
}
