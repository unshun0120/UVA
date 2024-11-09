#include<iostream>
using namespace std;

int main()
{
	int n, row, index, i, j, child, parent, count;
		
	while( cin >> n) 
	{
		row = 1;
		index = n;
		while( row < index )
		{
			index -= row;
			row++;
		}
		
		if( row%2 != 0 )
		{
			count = index;
			child = row;
			parent = 1;
			while( --count )
				child--;
			count = index;
			while( --count )
				parent++;
		}
		else
		{
			count = index;
			child = 1;
			parent = row;
			while( --count )
				child++;
			count = index;
			while( --count )
				parent--;
		}
		
		//cout << row << " " << index << endl;
		cout << "TERM " << n << " IS " << child << "/" << parent << "\n";
	}
	
}
