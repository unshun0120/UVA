#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int start, code[3], sum=0, current;
	
	while( cin >> start )
	{
		cin >> code[0] >> code[1] >> code[2];
		
		if( start == 0 && code[0] == 0 && code[1] == 0 && code[2] == 0 )
			break;	
		
		sum = 1080/9;
		if( start > code[0] )
			sum += start - code[0];
		else
			sum += 40 - ( code[0] - start );
			
		if( code[0] > code[1] )
			sum += 40 - ( code[0] - code[1] );
		else
			sum += code[1] - code[0];
			
		if( code[1] > code[2] )
			sum += code[1] - code[2];
		else
			sum += 40 - ( code[2] - code[1] );
			
		cout << sum*9 << "\n";
	}		
	
	
	
}
