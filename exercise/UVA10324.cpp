#include<iostream>
#include<string>
using namespace std;

int main(){
	
	string arr;
	int n, i, test_cnt=1, head, tail, count_0=0, count_1=0;
	
	while( cin >> arr ){
		cout << "Case " << test_cnt << ":\n";
		test_cnt++;
		cin >> n;
		while( n-- ){
			cin >> head >> tail;
			count_0 = count_1 = 0;
			for( i = head; i <= tail; i++ ){
				if( arr[i] == '0' )	count_0++;
				else if( arr[i] == '1' ) count_1++;
			}
			if( count_0 != 0 && count_1 != 0 )	cout << "No\n";
			else	cout << "Yes\n";
		}
		
	}
	
	
	
}
