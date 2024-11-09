//用map存資料 
#include<iostream>
#include<map>
#include<string>
#include<sstream>
using namespace std;

int main(){
	
	string input;
	stringstream ss;
	map<string, string> dic;
	
	while( getline(cin, input) ){
		string eng="", foreign="";
		ss.clear();
		ss.str(input);
		ss >> eng >> foreign;
		
		if( foreign != "" ){
			dic[foreign] = eng;
		}
		else if( eng != "" ){
			if( dic.find(eng) != dic.end() ){
				cout << dic[eng] << "\n";
			}
			else
				cout << "eh\n";
		}
		
		
	}
	
	
	
	
}
