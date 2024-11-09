#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n, i, opn, temp;
	bool nonPrime=false, nonPrime2=true;
	
	while( cin >> n )
	{
		if( n <= 1 )
		{
			cout << n << " is not prime.\n";
			continue;
		}
		nonPrime = false;
		nonPrime2 = true;
		temp = n;
		opn = 0;
			
		while( temp )	//�p��n�˹L�Ӫ��Ʀr
		{
			opn = opn*10 + temp%10;
			temp /= 10;
		}
		
		for( i = 2; i <= sqrt(n); i++ )		//�P�_��� 
		{
			if( n % i  == 0 )
			{
				nonPrime = true;
				break;		
			}
		}		
			
		if( n != opn )	//�Y�Ʀr�˹L�ӫᤣ�ۦP 
		{
			for( i = 2; i <= sqrt(opn); i++ )	//�P�_���
			{
				if( opn % i  == 0 )
				{
					nonPrime2 = false;
					break;		
				}
			}		
			
			if( nonPrime == true )
			{
				cout << n << " is not prime.\n";
			}
			else
			{
				if( nonPrime2 == true )
					cout << n << " is emirp.\n";
				else
					cout << n << " is prime.\n";
			}
			
		}
		else
		{
			if( nonPrime == true )
				cout << n << " is not prime.\n";
			else
				cout << n << " is prime.\n";
		} 
		
	}
	
	
		
}
