#include<iostream>
using namespace std;

int main()
{
	int testCase, casenum=1, total, i, j, n;
	int cost[36], money[37];
	long long temp, num, sum=0, min;
	bool first = true;
	
	cin >> testCase;
	total = testCase;
	while( testCase-- ){
		for( i = 0; i < 36; i++ )	//input cost
			cin >> cost[i];	
		cout << "Case " << casenum << ":\n";
		
		cin >> n;
		while( n-- ){
			cin >> num;
			cout << "Cheapest base(s) for number " << num << ": ";
			for( i = 2; i <= 36; i++ ){		//計算cheapest base 
				temp = num;
				sum = 0;
				while( temp ){
					sum += cost[temp%i];
					temp/=i;
				}
				money[i] = sum;
				if( i == 2 )
					min = sum;
				else if( sum < min )
					min = sum;
			}
			first = true;
			for( i = 2; i <= 36; i++ ){
				if( money[i] == min ){
					if( first ){	//第一個符合最小值的 
						cout << i;
						first = false;
					} 
					else
						cout << " " << i;
				}
			}
			cout << "\n";
		}
		if( casenum != total )
			cout << "\n";
		casenum++;
	}
}
