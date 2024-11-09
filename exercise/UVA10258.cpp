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
		
		int arr[3];	//���ɪ̽s�� �D�ؽs�� �ɾ��I 
		int incor_cnt[101][10]={0};		//�����C�Ӱ��ɪ̨C�D�`�@incorrect�X�� 
		int time[101]={0}; 	//�����C�Ӱ��ɪ̪�penalty time 
		int q_cnt[101][3]={0};	//���� 0->�O�_�ѥ[ 1->���ɪ̽s�� 2->�C�Ӱ��ɪ̸ѥX�h���D 
		int order[101]={0};	//������X�����ᶶ�� 
		bool parti[101]={0};	//���������ǰ��ɪ̦��ѥ[���� 
		ordertmp=0;
		
		while( getline(cin, input) && input != "" ){
			ss.clear();
	        ss.str(input); 
	        ss >> arr[0] >> arr[1] >> arr[2] >> state;
	        
			parti[ arr[0] ] = true;	//�����Ӱ��ɪ̦��ѥ[������ 
			q_cnt[ arr[0] ][0] = 1;
			q_cnt[ arr[0] ][1] = arr[0];
			//cout << arr[temp][0] << " " << parti[ arr[temp][0]] << endl << endl;
			if( state == 'I' ){		//�Yincorrect 
				incor_cnt[ arr[0] ][ arr[1] ] ++;	//�Yincorrect incor_cnt�N�[ 1 
			}
			else if( state == 'C' ){	//�Ycorrect 
				q_cnt[ arr[0] ][2]++;
				time[ arr[0] ] += arr[2] + incor_cnt[ arr[0] ][ arr[1] ]*20; //�p��penalty time 
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
