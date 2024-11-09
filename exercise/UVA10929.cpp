#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
{
	string arr;
	int odd=0, even=0, i, num;
	
	while( cin >> arr )
	{
		if( arr[0] == '0' )
			break;
		odd = 0;
		even = 0;
		
		for( i = 0; i < arr.length(); i++ )
		{
			if( i%2 == 0 )
			{
				num = (int)arr[i] - 48;
				odd += num;
			}
			else
			{
				num = (int)arr[i] - 48;
				even += num;
			}
		}
		
		if( abs( odd - even ) == 0  || abs( odd - even )%11 == 0 ) 
		{
			for( i = 0; i < arr.length(); i++ )
				cout << arr[i];
			cout << " is a multiple of 11.\n";
		}
		else
		{
			for( i = 0; i < arr.length(); i++ )
				cout << arr[i];
			cout << " is not a multiple of 11.\n";
		}
		
		
	}
	
	
	
}
