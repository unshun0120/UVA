#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
	int i, n, k, total, p1, p2;
	float winc=0, losec=0;
	string m1, m2;
	bool start=true;
	
	while( cin >> n ){
		if( n == 0 )
			break;
		
		if( !start )
			cout << "\n";
		else
			start = false;	
		int win[n+1]={0}, lose[n+1]={0};
		
		cin >> k;
		total = ( k * n * (n-1) )/2;
		
		for( i = 0; i < total; i++ ){
			cin >> p1 >> m1 >> p2 >> m2;
			if( m1 == "scissors"){
				if( m2 == "paper" ){
					win[ p1 ]++;
					lose[ p2 ]++;
				}
				else if( m2 == "rock" ){
					win[ p2 ]++;
					lose[ p1 ]++;
				}
			}
			else if( m1 == "paper"){
				if( m2 == "scissors" ){
					win[ p2 ]++;
					lose[ p1 ]++;
				}
				else if( m2 == "rock" ){
					win[ p1 ]++;
					lose[ p2 ]++;
				}
			}
			else if( m1 == "rock"){
				if( m2 == "scissors" ){
					win[ p1 ]++;
					lose[ p2 ]++;
				}
				else if( m2 == "paper" ){
					win[ p2 ]++;
					lose[ p1 ]++;
				}
			}
		}
		
		for( i = 1; i <= n; i++ ){
			winc = win[i];
			losec = lose[i];
			if( winc == 0 && losec == 0 )
				cout << "-\n";
			else
				cout << fixed << setprecision(3) << ( winc / (winc + losec) ) << "\n";
			
		}
		
		
	}
	
	
	
}






