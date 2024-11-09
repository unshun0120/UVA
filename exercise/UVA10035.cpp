#include<iostream>
using namespace std;

int main()
{
	int a, b, div=10, temp, carry=0;
	
	while( cin >> a >> b )
	{
		if( a == 0 &&  b == 0 )
			break;
			
		carry = 0;
		while( a != 0 && b != 0 )
		{
			temp = a%10 + b%10;
			if( temp >= 10 )
			{
				carry++;
				if( a%100 != 9 )
					a += 10;
				else if( b%100 != 9 )
					b += 10;
			}
			a /= 10;
			b /= 10;
		}
		
		if( carry == 0 )
			cout << "No carry operation.\n";
		else if( carry == 1 )
			cout << carry << " carry operation.\n";
		else
			cout << carry << " carry operations.\n";
		 
	}
	
	
}
