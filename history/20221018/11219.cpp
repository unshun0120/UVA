#include<iostream>
using namespace std;

int main(){
	int test, i, j, d1, m1, y1, d2, m2, y2, y;
	string arr1, arr2;
	
	cin >> test;
	
	for( i = 0; i < test; i++ ){
		cin >> arr1 >> arr2;
		
		d1 = ( ((int)arr1[0]-48)*10 + ((int)arr1[1]-48));
		m1 = ( ((int)arr1[3]-48)*10 + ((int)arr1[4]-48));
		y1 = ( ((int)arr1[6]-48)*1000 + ((int)arr1[7]-48)*100 + ((int)arr1[8]-48)*10 + ((int)arr1[9]-48));
	
		d2 = ( ((int)arr2[0]-48)*10 + ((int)arr2[1]-48));
		m2 = ( ((int)arr2[3]-48)*10 + ((int)arr2[4]-48));
		y2 = ( ((int)arr2[6]-48)*1000 + ((int)arr2[7]-48)*100 + ((int)arr2[8]-48)*10 + ((int)arr2[9]-48));
		
		if( y1 < y2 || y1 == y2 && m1 < m2 || y1 == y2 && m1 == m2 && d1 < d2 ){
			cout << "Case #" << i+1 << ": Invalid birth date" << endl;
		}
		else{
			y = y1 - y2;
			if( m1 < m2 || m1 == m2 && d1 < d2 ){
				y--;
			}
			if( y > 130)	
				cout << "Case #" << i+1 << ": Check birth date" << endl;
			else if( y <= 0 )
				cout << "Case #" << i+1 << ": 0" << endl;
			else
				cout << "Case #" << i+1 << ": " << y << endl;
		}
	}


}






















