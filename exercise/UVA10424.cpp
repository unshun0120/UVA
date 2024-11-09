#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
	
	string n1, n2;
	int i;
	int sum1=0, sum2=0, love1=0, love2=0;
	double ratio;
	
	while( cin >> n1 >> n2 ){
		sum1 = sum2 = love1 = love2 = 0;
		for( i = 0; i < n1.length(); i++ ){
			if( n1[i] >= 65 && n1[i] <= 90 )
				sum1 += (int)n1[i] - 64;
			else if( n1[i] >= 97 && n1[i] <= 122 )
				sum1 += (int)n1[i] - 96;
		}
		
		for( i = 0; i < n2.length(); i++ ){
			if( n2[i] >= 65 && n2[i] <= 90 )
				sum2 += (int)n2[i] - 64;
			else if( n2[i] >= 97 && n2[i] <= 122 )
				sum2 += (int)n2[i] - 96;
		}
		do{
			love1 = 0;
			while( sum1 ){
				love1 += sum1%10;
				sum1 /= 10;
			}
			sum1 = love1;
		}while( sum1 >= 10 );
		
		do{
			love2 = 0;
			while( sum2 ){
				love2 += sum2%10;
				sum2 /= 10;
			}
			sum2 = love2;
		}while( sum2 >= 10 );
		
		if( sum2 > sum1 )
			ratio = (double)love1/love2*100;
		else 
			ratio = (double)love2/love1*100;
			
		if( ratio < 100 )
			cout << fixed << setprecision(2) << ratio << " %\n";
		else
			cout << "100.00 %\n";
		
	}
	
	
	
}
