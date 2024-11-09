#include<iostream>
#include<string>
using namespace std;

int main()
{
	int line, i, j, num[26] = {0}, temp, chTemp;
	char ch[26];
	
	cin >> line;
	//getchar();	
	string arr;
	getline(cin,arr);	//cin接 getline會有問題 所以要多打一次 getline 
		
	while( line-- )
	{
		getline(cin, arr);
		for( i = 0; i < 26; i++ )
			ch[i] = 'A' + i;
		for( i = 0; i < arr.length(); i++ )
		{
			if( arr[i] >= 97 && arr[i] <= 122 )
				arr[i] = arr[i] - 32;
			if( arr[i] >= 65 && arr[i] <= 90 )
				num[ arr[i]-65 ]++;
		}
	}
	
	for( i = 0; i < 26; i++ )
	{
		for( j = 0; j < i; j++ )
		{
			if( num[i] > num[j] )
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
				
				chTemp = ch[i];
				ch[i] = ch[j];
				ch[j] = chTemp;
			}	
			else if( num[i] == num[j] && ch[i] < ch[j] )
			{
				chTemp = ch[i];
				ch[i] = ch[j];
				ch[j] = chTemp;
			}	
		}
	}
	
	for( i = 0; i < 26; i++ )
	{
		if( num[i] == 0 )
			break;
		cout << ch[i] << " " << num[i] << endl;
	}
	
	
	
}
