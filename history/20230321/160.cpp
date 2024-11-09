#include<iostream>
using namespace std;

int main(){
	
	int n, i, j, num, temp=0, outnum=0;
	
	while( cin >> n ){
		if( n == 0 )
			break;
			
		int count[n+1];	//¬ö¿ýµ²ªG
		bool isPrime[n+1];
		
		for( i = 0; i <= n; i++ ){
			isPrime[i] = false;
			count[i] = 0;
			for( j = 2; j < i; j++ ){
				if( i % j == 0 )
					break;
			}
			if( j == i ){
				isPrime[i] = true;
			}
		} 
		
		for( i = 2; i <= n; i++ ){
			num = i;
			for( j = 2; j <= n; j++ ){
				if( isPrime[j] ){
					temp = 0;
					while( num % j == 0 ){
						num /= j;
						temp++;
					}
					count[j] += temp;
				}
				if( num == 1 )
					break;
			}
		}
		
		if( n >= 0 && n <= 9 )
			cout << "  " << n << "! =";
		else if( n >= 10 && n <= 99 )
			cout << " " << n << "! =";
		else
			cout << n << "! =";
		outnum = 0;
		for( i = 2; i <= n; i++ ){
			if( isPrime[i] ){
				outnum++;
				if( outnum == 16 )
					cout << "\n      ";
				if( count[i] >= 0 && count[i] <= 9 )
					cout << "  " << count[i];
				else if( count[i] >= 10 && count[i] <= 100 )
					cout << " " << count[i];
				else
					cout << count[i];
			}
		}
		cout << "\n";
		
			
	}
	
	
}
