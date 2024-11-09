#include<iostream>
using namespace std;

int main(){

	long long num, temp;
	
	while( cin >> num ){
		if( num == 0 )
			break;
			
		temp = 0;
		while( num >= 10 ){
			temp = 0;
			while( num ){
				temp += num%10;
				num /= 10;
			}
			num  = temp;
		}
	
		cout << num << endl;
	
	}

}
