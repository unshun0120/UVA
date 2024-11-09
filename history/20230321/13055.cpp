#include<iostream>
#include<string>
using namespace std;

int main(){
	
	bool space=false;
	int i, testcase, top=-1;
	
	cin >> testcase;
	string query[testcase]="", input, type, name;
	
	cin.ignore();	//!!!用getline如果有遇到問題要加這行!!!! 
	while( testcase-- ){
		getline(cin, input);
		space = false;
		type = name = "";
		for( i = 0; i < input.length(); i++ ){
			if( input[i] == ' ' ){
				space = true;
				continue;
			} 
			if( !space ){
				type += input[i];
			}
			else{
				name += input[i];
			}
		}
		
		if( type == "Sleep" ){
			top++;
			query[top] = name; 
		}
		else if( type == "Test" ){
			if( top < 0 )
				cout << "Not in a dream\n";
			else{
				cout << query[top] << "\n";
			}
		}
		else if( type == "Kick" ){
			top--;
			if( top < 0 )
				top = -1;
		}
	}
	
	
}
