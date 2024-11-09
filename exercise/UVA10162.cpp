#include<iostream>
#include<string>
using namespace std;

int main(){
	string arr, temp;		
				//	1  2  3  4  5  6  7  8  9  10
	int s[21] = {0, 1, 5, 2, 8, 3, 9, 2, 8, 7, 7,
				 8, 4, 7, 3, 8, 4, 1, 5, 4, 4};
			//	 11 12 13 14 15 16 17 18 19 20 
	// 砏 : –20计 s + 4 
	int count=0, num, ans, i, lens;
	
	while( cin >> arr ){
		lens = arr.length();
		if( lens == 1 && arr[0] == '0' )
			break;
			
		temp = arr;
		count = 0;
		for( i = 0; i < arr.length(); i++ )
			arr[i] = (int)arr[i] - 48;
		
		if( lens >= 3 || arr[0]>=2 && arr[1]!=0 ){
			num = arr[lens-2]/2;
			if( arr[lens-2]%2 == 0 )	//璝计材2计案计 玥匡1~10 
				ans = ( s[arr[lens-1]]+4*num )%10;
			else
				ans = ( s[arr[lens-1]+10]+4*num )%10;
		}
		else if( lens >= 2 && arr[0] > 2 && arr[1] == 0 ){	//矪瞶 e.g. 30, 40, 50, ... 
			if( arr[lens-1] == 0 ){
				num = arr[lens-2]/2;
				if( arr[lens-2]%2 == 0 )	//璝计材2计案计 玥匡1~10 
					ans = ( s[20]+4*(num-1) )%10;
				else
					ans = ( s[10]+4*num )%10;
			}
		}
		else if( lens == 2 ){
			num = arr[0]*10 + arr[1];
			ans = s[num];
		}
		else{
			num = arr[0];
			ans = s[num];
		}
		cout << ans << "\n";
		
	}	
	
	
	
} 
