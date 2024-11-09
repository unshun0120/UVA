#include<iostream>
#include<string>
using namespace std;

int main(){
	
	int i, j, testcase, n, max1=0, max2=0, temp=0, index=0, jump=1;
	bool find = false;
	
	cin >> testcase;
	
	while( testcase-- ){
		cin >> n;
		int fred[n];
		
		for( i = 0; i < n; i++ )
			cin >> fred[i];
		
		max1 = 1;
		for( i = 0; i < n; i++ ){
			temp = 1;
			index = 0;
			for( j = i; j < n-1; j++ ){
				if( index % 2 == 0 ){
					if( fred[j] > fred[j+1] ){
						temp++;
						index++;	
					}
					else{	
						break;
					}
				}
				else{
					if( fred[j] < fred[j+1] ){
						temp++;
						index++;	
					}
					else{
						break;
					}
				}
			}
			
			if( temp > max1 )
				max1 = temp;
		}
		
		max2 = 1;
		for( i = 0; i < n; i++ ){
			temp = 1;
			index = 0;
			jump = 1;
			for( j = i; j < n-1; j++ ){
				if( index % 2 == 0 ){
					if( fred[j] > fred[j+1] ){
						temp++;
						index++;	
					}
				}
				else{
					if( fred[j] < fred[j+1] ){
						temp++;
						index++;	
					}
				}
				jump++;
			}
			
			if( temp > max2 )
				max2 = temp;
		}
		if( max1 > max2 ) 
			cout << max1 << "\n";
		else
			cout << max2 << "\n";
	}
	
} 
