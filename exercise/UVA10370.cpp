#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int C, i, n, sum=0;
	double avg, per, count=0;
	
	cin >> C;
	
	while( C-- )
	{
		cin >> n;
		int grade[n];
		
		sum = 0;
		count=0;
		for( i = 0; i < n; i++ )
		{
			cin >> grade[i];
			sum += grade[i];
		}
		avg = sum/n;
		for( i = 0; i < n; i++ )
		{
			if( grade[i] > avg )
				count++;
		}
		cout << fixed << setprecision(3) << count/n*100 << "%\n";
		
	}
	
	
	
}
