#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	
	int i, j, n, test, idx=0;
	long total=0, po;
	int arr[40];
	
	cin >> test; 
	while( test-- ){
		
		for( i = 0; i < 40; i++ )
			arr[i] = 0;
		total = 0;
		idx = 0;
		while( cin >> n ){
			if( n == 0 )
				break;
			arr[idx] = n;
			idx++;
		}
		
		for( i = 0; i < idx; i++ ){
			for( j = 0; j < i; j++ ){
				if( arr[i] > arr[j] )
					swap(arr[i], arr[j] );
			}
		}
		
		for( i = 0; i < idx; i++ ){
			po = 1;
			for( j = 0; j < i+1; j++ )
				po *= arr[i];
			total += 2 * po;
		}
		
		if( total > 5000000 || total < 0 ){
			cout << "Too expensive\n";
		}
		else
			cout << total << endl;
	} 
	
	
}
