#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	
	char input[200];
	int input_cnt, hour, min, sec;
	double now_speed=0, pre_speed=0, d=0, now_time, pre_time;
	
	while( gets(input) ){
		input_cnt = sscanf( input, "%d:%d:%d %lf", &hour, &min, &sec, &now_speed );
		now_time = hour*3600 + min*60 + sec;
		d += pre_speed * (now_time - pre_time)/3600;
		pre_time = now_time;
		if( input_cnt == 3 )
			printf("%.2d:%.2d:%.2d %.2f km\n", hour, min, sec, d);
		else
			pre_speed = now_speed;
	}
	
	
	
}
