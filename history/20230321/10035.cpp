#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
	
	string n1, n2, s1, s2;
	int i, lens, c, num1, num2;
	bool flag=0;
	
	while( cin >> n1 >> n2 ){
		if( n1=="0" && n2=="0" )
			break;
		num1 = num2 = 0;
		c = 0;
		s1 = "";
		s2 = "";
		
		for( i = n1.length()-1; i >= 0; i-- ){	//store n1 to s1	
			s1 += n1[i];
		}
		
		for( i = n2.length()-1; i >= 0; i-- ){	//store n2 to s2
			s2 += n2[i];
		}
		
		lens = max( n1.length(), n2.length() );
		
		flag = false;
		for( i = 0; i < lens; i++ ){
			if( i >= n1.length() )
				break;
			else if( i >= n2.length() )
				break;
			num1 = (int)s1[i] - 48;
			num2 = (int)s2[i] - 48;	
			if( flag ){
				if( num1 + num2 + 1 >= 10 ){
					c++;
					flag = true;	
				}
				else
					flag = false;
			}
			else{
				if( num1 + num2 >= 10 ){
					c++;
					flag = true;	
				}
				else
					flag = false;
			}
		}
		
		if( c == 0 )
			cout << "No carry operation.\n";
		else if( c == 1 )
			cout << "1 carry operation.\n";
		else
			cout << c << " carry operations.\n";
		
	} 
	
	
	
	
}
