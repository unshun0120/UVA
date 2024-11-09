#include<iostream>
#include<string>
using namespace std;

int main()
{
	int i;
	string arr;
	string table = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./'";
	
	while( getline( cin, arr ) )
	{
		for( i = 0; i < arr.length(); i++ )
		{
			if( arr[i] == ' ' )
			{
				cout << " ";
				continue;
			}
			else if( arr[i] >= 65 && arr[i] <= 90 )
				arr[i] = arr[i] + 32;
			cout << table[ table.find(arr[i]) - 2 ];
		}
		cout << "\n";
		
	}
	
	
	
	
	
}
