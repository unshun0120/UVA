#include<stdio.h>

void bangla( long long int n )
{
	if( n >= 10000000 )
	{
		bangla( n/10000000 );
		printf(" kuti");
		n %= 10000000;
	}
	
	if( n >= 100000 )
	{
		bangla( n/100000 );
		printf(" lakh");
		n %= 100000;
	}
	
	if( n >= 1000 )
	{
		bangla( n/1000 );
		printf(" hajar");
		n %= 1000;
	}
	
	if( n >= 100 )
	{
		bangla( n/100 );
		printf(" shata");
		n %= 100;
	} 
	
	if( n != 0 )
	{
		printf(" %d", n);
	}
	
}

int main()
{
	long long int num;
	int testCase = 0;
	
	while( scanf("%lld", &num) != EOF )
	{
		testCase++;
		printf("%4d.", testCase);
		if( num == 0 )
			printf(" 0");
		else 
			bangla(num);
		printf("\n");
	}
	
	
	
	
}
