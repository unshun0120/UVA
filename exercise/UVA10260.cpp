#include<iostream>
#include<string>
using namespace std;

int main(){
	
	int i;
	string arr;
	
	while( cin >> arr ){
		for( i = 0; i < arr.length(); i++ ){
			if( arr[i] == 'B' || arr[i] == 'F' || arr[i] == 'P' || arr[i] == 'V' ){
				if( arr[i-1] == 'B' || arr[i-1] == 'F' || arr[i-1] == 'P' || arr[i-1] == 'V' )
					continue;
				cout << "1";
			}
			else if( arr[i] == 'C' || arr[i] == 'G' || arr[i] == 'J' || arr[i] == 'K' || arr[i] == 'Q' || arr[i] == 'S' || arr[i] == 'X' || arr[i] == 'Z' ){
				if( arr[i-1] == 'C' || arr[i-1] == 'G' || arr[i-1] == 'J' || arr[i-1] == 'K' || arr[i-1] == 'Q' || arr[i-1] == 'S' || arr[i-1] == 'X' || arr[i-1] == 'Z' )
					continue;
				cout << "2";
			}
			else if( arr[i] == 'D' || arr[i] == 'T' ){
				if( arr[i-1] == 'D' || arr[i-1] == 'T' )
					continue;
				cout << "3";	
			}
			else if( arr[i] == 'L' ){
				if( arr[i-1] == 'L' ) continue;
				cout << "4";
			}
			else if( arr[i] == 'M' || arr[i] == 'N' ){
				if( arr[i-1] == 'M' || arr[i-1] == 'N' )
					continue;
				cout << "5";
			}
			else if( arr[i] == 'R' ){
				if( arr[i-1] == 'R' ) continue;
				cout << "6";
			}
		}
		cout << "\n"; 
	}
	
} 
