#include<iostream>
using namespace std;

int main()
{
	int n, temp, div=2, count=0;
	bool flag=false;
	
	while( cin >> n )
	{
		if( n == 0 )
			break;
			
		flag = false;
		count = 0;
		div = 2;
		temp = n;	
		while( temp != 1 )
		{
			while( temp % div == 0 )
			{
				flag = true;
				temp /= div;
			}
			div++;
			if( flag )
				count++;
			flag = false;
		}
		
		cout << n << " : " << count << "\n";
		
	}
	
	
	
}
