#include<iostream>
using namespace std;

int main()
{
	bool find[1001]={false}, prime=true;
	int s, i, j, sum=0, temp, testCase=0;
	int factor[1001];
	
	for( i = 1; i < 1000; i++ )
	{
		sum = 0;
		for( j = 1; j <= i; j++ )
		{
			if( i%j == 0 )
				sum += j;
		}
		if( sum < 1000 )
		{
			find[sum] = true;
			factor[sum] = i;
		}
		
	}
	
	while( cin >> s )
	{
		if( s == 0 )
			break;
		testCase++;
		cout << "Case " << testCase << ": ";
		if( find[s] )
			cout << factor[s] << "\n";
		else
			cout << "-1\n";
	}
	
	
	
}
