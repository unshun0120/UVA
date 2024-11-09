#include<iostream>
using namespace std;

int main(){
	int y;
	
	while( cin >> y ){
		if( y == -1 )
			break;
		long long temp = 0, f=0, m=1, oldf=0, oldm=0;
		while( temp <= y ){
			f = oldf + oldm; 
			m = oldf + 1;
			oldf = f;
			oldm = m;
			
			temp++;
		}		
		cout << f << " " << f+m << endl;
	}

}
