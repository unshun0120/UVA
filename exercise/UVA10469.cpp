#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
{
	int a, b,	//input number 
		lenA=0, lenB=0,	//	string length 
		i, maxLen, num;
	
	while( cin >> a >> b )
	{
		int arr1[2000]={0}, arr2[2000]={0}, ans[2000]={0};	//store binary-based number
		lenA=0;
		lenB=0;
		num=0;
		maxLen=0;
		while( a > 0 )	//convert a to binary string
		{
			arr1[lenA] = a%2;
			a/=2;
			lenA++;
		}
		while( b > 0 )	//convert b to binary string
		{
			arr2[lenB] = b%2;
			b/=2;
			lenB++;
		}
		if( lenA > lenB )
		{
			maxLen = lenA;
			for( i = 0; i < lenA; i++ )
			{
				if( i < lenB )
				{
					ans[i] = arr1[i]^arr2[i];
				}
				else
					ans[i] = arr1[i];
			}
			
			/*for( i = lenA-1; i >= 0; i-- )
				cout << ans[i];*/
		}
		else 
		{
			maxLen = lenB;
			for( i = 0; i < lenB; i++ )
			{
				if( i < lenA )
				{
					ans[i] = arr1[i]^arr2[i];
				}
				else
					ans[i] = arr2[i];
			}
			/*for( i = lenB-1; i >= 0; i-- )
				cout << ans[i];*/
		}
		
		for( i = 0; i < maxLen; i++ )
		{
			num += pow(2, i)*ans[i];
		}
		
		cout << num << "\n";
		
		
		
	}
	
	
	
}
