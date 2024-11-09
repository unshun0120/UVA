#include<iostream>
using namespace std;

int main(){

	string arr1, arr2;
	int i, app1[26]={0}, app2[26]={0}, ct1[100]={0}, ct2[100]={0};
	
	while( cin >> arr1 >> arr2 ){
		for( i = 0; i < 26; i++ ){
			app1[i] = 0;
			app2[i] = 0;
		}
		for( i = 0; i < 100; i++ ){
			ct1[i] = 0;
			ct2[i] = 0;
		}
		
		for( i = 0; i < arr1.length(); i++ ){
			app1[ (int)arr1[i]-65 ]++;
			app2[ (int)arr2[i]-65 ]++;
		}
		
		for( i = 0; i < 26; i++ ){
			ct1[ app1[i] ]++;
			ct2[ app2[i] ]++;
		}
		
		for( i = 0; i < 100; i++ ){
			if( ct1[i] != ct2[i] )
				break;
		}
		
		if( i == 100 )
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	
	}

}
