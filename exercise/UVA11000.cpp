#include<iostream>
using namespace std;

int main()
{
	long long i, n, fcount=1, mcount=0, ftemp=0, mtemp=0;
	
	while( cin >> n )
	{
		if( n == -1 )
			break;
			
		fcount = ftemp = 1;
		mcount = mtemp = 0;
		for( i = 0; i < n; i++ )
		{
			fcount = mtemp + 1;
			mcount = ftemp + mtemp; 
			ftemp = fcount;
			mtemp = mcount;
		}
		
		cout << mcount << " " << mcount + fcount << "\n";
		
	}
}
