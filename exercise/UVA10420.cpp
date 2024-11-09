#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int main()
{
	int line, i, j, count=0;
	
	cin >> line;
	string country[line], name, temp;
	
	for( i = 0; i < line; i++ )
	{
		cin >> country[i];
		getline( cin, name );
	}
	
	for( i = 0; i < line; i++ )
	{
		for( j = 0; j < i; j++ )
		{
			if( country[i] < country[j] )
			{
				temp = country[i];
				country[i] = country[j];
				country[j] = temp;
			}
		}
	}
	
	for( i = 0; i < line; i++ )
	{
		cout << country[i] << " ";
		count = 0;
		for( j = i; j < line; j++)
		{
			if( country[i] == country[j] )
				count++;
			else
				break;
		}
		cout << count << "\n";
		i = j - 1;
	}
	
	
}
