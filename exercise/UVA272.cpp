#include<iostream>
#include<string>
using namespace std;

int main()
{
	int i, count=0;
	string arr;
	
	while( getline(cin, arr) )
	{
		for( i = 0; i < arr.length(); i++ )
		{
			if( arr[i] == '"' )
			{
				count++;
				if( count%2 == 1 )
					cout << "``";
				else
					cout << "''";
			}
			else
				cout << arr[i];
		}
		cout << "\n";
	}
	
	
	
}
