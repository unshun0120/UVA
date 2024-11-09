#include<iostream>
#include<string>
using namespace std;

int main()
{
	int i, sum=0, degree=0, temp=0;
	string arr;
	
	while( cin >> arr && arr != "0" )
	{
		sum = 0;
		degree = 0;
		temp = 0;
		for( i = 0; i < arr.length(); i++ )
			sum += (int)arr[i] - 48;
			
		while( 1 )
		{
			temp = 0;
			if( sum%9 != 0 )
				break;
			else if( sum == 9 )
			{
				degree++;
				break;
			}
			else
				degree++;
			
			while( sum )
			{
				temp += sum%10;
				sum /= 10;
			}
			
			sum = temp;
		}
		
		if( degree )
		{
			for( i = 0; i < arr.length(); i++ )
				cout << arr[i];
			cout << " is a multiple of 9 and has 9-degree " << degree << ".\n"; 
		}
		else
		{
			for( i = 0; i < arr.length(); i++ )
				cout << arr[i];
			cout << " is not a multiple of 9.\n";
		}
		
	}
	
	
}
