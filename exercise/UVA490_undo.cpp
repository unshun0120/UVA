#include<iostream>
#include<string>
using namespace std;

int main()
{
	int max=0, index=0, i, j, k;
	string arr[100]="";
	
	while( getline(cin, arr[index]) )
	{
		if( arr[index].length() > max )
			max = arr[index].length();
		index++;
	}
	
	for( i = 0; i < max; i++ )
	{
		for( j = index-1; j >= 0; j-- )
		{
			if( i >= arr[j].length() )
				cout << " ";
			else
				cout << arr[j][i];
		}
		cout << "\n";
	}
	
	
	
}

