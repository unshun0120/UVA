#include<iostream>
using namespace std;

int main(){
	
	int n, count, i, lens=0;
	string b;
	
	while( cin >> n ){
		
		if( n == 0 )
			break;
		
		count = 0;
		
		b = "";
		lens = 0;
		while( n ){
			if( n % 2 == 1 ){
				b += '1';
				count++;	
			}
			else
				b += '0';
			n /= 2;
			lens++;
		}
		
		cout << "The parity of ";
		for( i = lens-1; i >= 0; i-- )
			cout << b[i];
		cout << " is " << count << " (mod 2).\n";
		
	}
	
	
	
}
