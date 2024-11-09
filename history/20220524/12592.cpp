#include<iostream>
#include<string>
using namespace std;

int main(){
	int n, q, i, j;
	
	while( cin >> n ){
		string pair[2*n];
		
		cin.ignore();
		for( i = 0; i < 2*n; i++ )
			getline(cin, pair[i]);
		
		cin >> q;
		string match[q];
		
		cin.ignore();
		for( i = 0; i < q; i++ )
			getline(cin, match[i]);
		
		for( i = 0; i < q; i++ ){
			for( j = 0; j < 2*n; j++ ){
				if( match[i] == pair[j] ){
					cout << pair[j+1] << endl;
					break;
				}
			}
		}
		
		
	}


} 	 
