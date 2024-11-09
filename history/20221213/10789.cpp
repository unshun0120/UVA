#include<iostream>
#include<string>
using namespace std;

int main(){
	
	int t, i, j, test=1;
	string arr;
	bool prime[2001], find=false;
	
	cin >> t;
	
	for( i = 0; i <= 2000; i++ ){	//find prime number
		prime[i] = false;
		for( j = 2; j < i; j++ ){
			if( i % j == 0 )
				break;
		}
		if( j == i )
			prime[i] = true;
		
	}
	
	while( t-- ){
		cin >> arr;	
		
		int count[62]={0};
		
		for( i = 0; i < arr.length(); i++ ){
			if( arr[i] >= 48 && arr[i] <= 57 ){
				count[ arr[i]-48 ]++;
			}
			else if( arr[i] >= 65 && arr[i] <= 90 ){
				count[ arr[i]-55 ]++; 
			}
			else if( arr[i] >= 97 && arr[i] <= 122 ){
				count[ arr[i]-61 ]++;
			}
		}
		
		find = false;
		cout << "Case " << test << ": ";
		for( i = 0; i < 62; i++ ){
			if( count[i] != 0 && prime[ count[i] ] == true ){
				find = true;
				if( i >= 0 && i <= 9 ){
					cout << (char)('0' + i);
				}
				else if( i >= 10 && i <= 35 ){
					cout << (char)('A' + i - 10);
				}
				else if( i >= 36 && i <= 61 ){
					cout << (char)('a' + i - 36);
				}
			}
		}
		if( !find )
			cout << "empty";
		cout << "\n";
		test++;
	}
	
	
	
}


















