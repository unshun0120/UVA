#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	int n, i;
	bool escape=false;	//¬O§_°k¦¨¥\ 
	
	while( cin >> n )
	{
		float hole[n][2];	//¹«¬}®y¼Ð 
		escape = false;
		float gox, goy, dogx, dogy; 	// gopher & dog ®y¼Ð
		float godis, dogdis;	//gopher & dog »P¹«¬}¶ZÂ÷ 
		cin >> gox >> goy >> dogx >> dogy;	
		for( i = 0; i < n; i++ )	//§PÂ_ 
		{
			cin >> hole[i][0] >> hole[i][1];
			godis = pow(gox-hole[i][0], 2) + pow(goy-hole[i][1], 2);	
			dogdis = pow(dogx-hole[i][0], 2) + pow(dogy-hole[i][1], 2);
			
			if( godis*2 < dogdis )
			{
				escape = true;
				cout << "The gopher can escape through the hole at (" <<
				fixed << setprecision(3) << hole[i][0] << "," << hole[i][1] << ").\n";
				break;
			}
		}
		
		if( escape == false )
		{
			cout << "The gopher cannot escape.\n";
		}
			
	}	
	
	
	
	
} 
