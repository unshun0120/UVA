#include<iostream>
#include<vector>;
using namespace std;

int main(){
	int m, n;
	
	while( cin >> m >> n ){
		vector<int> a;
		while( m != 1 && n != 1 && n != 0 && m % n == 0 ){
			a.push_back( m );
			m /= n;
		}
		
		if( m != 1 || m == 1 && n == 1 )
			cout << "Boring!" << endl;
		else{
			a.push_back(1);
			for( int i = 0; i < a.size()-1; i++ )
				cout << a[i] << " ";
			cout << a[a.size()-1];
			cout << endl;		
		}
	}


}
