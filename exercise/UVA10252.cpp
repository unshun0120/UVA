#include<iostream>
#include<string>
using namespace std;

int main()
{
	int i, j, min;
	string arr, arr2;
	char alpha[26];
	
	for( i = 0; i < 26; i++ )
		alpha[i] = 'a' + i;

	while( getline(cin, arr) )
	{
		getline(cin, arr2);
		int ch[26]={0}, ch2[26]={0};
		
		for( i =  0; i < arr.length(); i++ )
			ch[ arr[i]-'a' ]++;
		
		for( i = 0; i < arr2.length(); i++ )
			ch2[ arr2[i] - 'a' ]++;
			
		for( i = 0; i < 26; i++ )
		{
			if( ch[i] != 0 && ch2[i] != 0 )
			{
				if( ch[i] <= ch2[i] )
					min = ch[i];
				else
					min = ch2[i];
					
				for( j = 0; j < min; j++ )
					cout << alpha[i]; 
			}				
		}		
		cout << "\n";	
	}
	
	
	
}
