#include<iostream>
#include<string>
using namespace std;

int main(){

	string str, ans="";
	int lens, i;
	
	while( getline(cin, str)){
		ans = "";
		lens = str.length();
	
		for( i = 0; i < lens; i++ ){
			switch( str[i] ){
				case 'B' : ans+= 'V';
						   break;
				case 'C' : ans+= 'X';
						   break;
				case 'D' : ans+= 'S';
						   break;
				case 'E' : ans+= 'W';
						   break;
				case 'F' : ans+= 'D';
						   break;
				case 'G' : ans+= 'F';
						   break;
				case 'H' : ans+= 'G';
						   break;
				case 'I' : ans+= 'U';
						   break;
				case 'J' : ans+= 'H';
						   break;
				case 'K' : ans+= 'J';
						   break;
				case 'L' : ans+= 'K';
						   break;
				case 'M' : ans+= 'N';
						   break;
				case 'N' : ans+= 'B';
						   break;
				case 'O' : ans+= 'I';
						   break;
				case 'P' : ans+= 'O';
						   break;
				case 'R' : ans+= 'E';
						   break;   
				case 'S' : ans+= 'A';
						   break;
				case 'T' : ans+= 'R';
						   break;
				case 'U' : ans+= 'Y';
						   break;
				case 'V' : ans+= 'C';
						   break;
				case 'W' : ans+= 'Q';
						   break;
				case 'X' : ans+= 'Z';
						   break;
				case 'Y' : ans+= 'T';
						   break;
				case '1' : ans+= '`';
						   break;
				case '2' : ans+= '1';
						   break;
				case '3' : ans+= '2';
						   break;
				case '4' : ans+= '3';
						   break;
				case '5' : ans+= '4';
						   break;
				case '6' : ans+= '5';
						   break;
				case '7' : ans+= '6';
						   break;
				case '8' : ans+= '7';
						   break;			   
				case '9' : ans+= '8';
						   break;
				case '0' : ans+= '9';
						   break;
				case '-' : ans+= '0';
						   break;			   
				case '=' : ans+= '-';
						   break;
				case '[' : ans+= 'P';
						   break;
				case ']' : ans+= '[';
						   break;
				case '\\' : ans+= ']';
						   break;
				case ';' : ans+= 'L';
						   break;
				case '\'' : ans+= ';';
						   break;
				case ',' : ans+= 'M';
						   break;
				case '.' : ans+= ',';
						   break;
				case '/' : ans+= '.';
						   break;
				case ' ' : ans+= ' ';
						   break;
				default :
						  break; 
			}	
		}
		
		cout << ans << endl;
		
	}
	

}

