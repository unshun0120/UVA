#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;

int main(){
	
	string input;
	stringstream ss;
 	int testcnt, start=1, i, j, ordertmp;
	char state;
	
	cin >> testcnt;
	getchar();
	getchar();
	while( testcnt-- ){
		
		int arr[3];	//參賽者編號 題目編號 時機點 
		int incor_cnt[101][10]={0};		//紀錄每個參賽者每題總共incorrect幾次 
		int time[101]={0}; 	//紀錄每個參賽者的penalty time 
		int q_cnt[101][3]={0};	//紀錄 0->是否參加 1->參賽者編號 2->每個參賽者解出多少題 
		int order[101]={0};	//紀錄輸出的先後順序 
		bool parti[101]={0};	//紀錄有哪些參賽者有參加比賽 
		ordertmp=0;
		
		while( getline(cin, input) && input != "" ){
			ss.clear();
	        ss.str(input); 
	        ss >> arr[0] >> arr[1] >> arr[2] >> state;
	        
			parti[ arr[0] ] = true;	//紀錄該參賽者有參加此比賽 
			q_cnt[ arr[0] ][0] = 1;
			q_cnt[ arr[0] ][1] = arr[0];
			//cout << arr[temp][0] << " " << parti[ arr[temp][0]] << endl << endl;
			if( state == 'I' ){		//若incorrect 
				incor_cnt[ arr[0] ][ arr[1] ] ++;	//若incorrect incor_cnt就加 1 
			}
			else if( state == 'C' ){	//若correct 
				q_cnt[ arr[0] ][2]++;
				time[ arr[0] ] += arr[2] + incor_cnt[ arr[0] ][ arr[1] ]*20; //計算penalty time 
			}
		}
		
		for( i = 1; i <= 100; i++ ){
			for( j = 1; j < i; j++ ){
				if( q_cnt[i][2] > q_cnt[j][2] ){
					swap( q_cnt[i][0], q_cnt[j][0] );
					swap( q_cnt[i][1], q_cnt[j][1] );
					swap( q_cnt[i][2], q_cnt[j][2] );
				}
			}
		}
		
		if( start == 1 )
	        start = 2;
        else
        	cout << "\n";
		
		for( i = 1; i <= 100; i++ ){
			if( q_cnt[i][0] == 1 ){
				cout << q_cnt[i][1] << " " << q_cnt[i][2] << " " << time[ q_cnt[i][1] ] << "\n";
			}
		}
	}	
}
