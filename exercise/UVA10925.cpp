#include<iostream>
using namespace std;

int main(){
	
	long long int total, money;
	int i, n, f, test=0;
	
	while( cin >> n >> f ){
		
		if( n == 0 && f == 0 )
			break;
		test++;
		total = 0;
		for( i = 0; i < n; i++ ){
			cin >> money;
			total += money;
		}
		cout << "Bill #" << test << " costs " << total << ": each friend should pay " << total/f << endl << endl;
		
	} 
	
	
	
} 
