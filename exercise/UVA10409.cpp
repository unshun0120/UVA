#include<iostream>
#include<string>
using namespace std;

int main(){
	int n, i, top;
	
	while( cin >> n ){
		
		if( n == 0 )
			break;
				
		// begin 1->top 2->north 3->west
		string arr[n];
		int dir[3] = {1, 2, 3};	// top-north-west  
		top = 1;
		
		for( i = 0; i < n; i++ )
			cin >> arr[i];
			
		for( i = 0; i < n; i++ ){
			if( arr[i] == "north" ){
				top = 7 - dir[1];
				dir[1] = dir[0];
				dir[0] = top;
			} 
			else if( arr[i] == "south" ){
				top = dir[1];
				dir[1] = 7 - dir[0];
				dir[0] = top;
			}
			else if( arr[i] == "west" ){
				top = 7 - dir[2];
				dir[2] = dir[0];
				dir[0] = top;
			}
			else if( arr[i] == "east" ){
				top = dir[2];
				dir[2] = 7 - dir[0];
				dir[0] = top;
			}
		}
		
		cout << top << "\n";
		
	}	
	
	
	
} 
