#include<iostream>
#include<string>
using namespace std;

int main()
{
	int i, n, h1, h2, m1, m2;
	string time;
	
	cin >> n;
	while( n-- )
	{
		cin >> time;
		h1 = (int)time[0]-48;	
		h2 = (int)time[1]-48;
		m1 = (int)time[3]-48;
		m2 = (int)time[4]-48;
		
		if( h1 == 0 && h2 == 0 )
		{
			if( m1 == 0 )
			{
				if( m2 == 0 )
					m2++;
			}
			else
			{
				while( m1 != m2 )
				{
					if( m2 != 9 )
						m2++;
					else if( m2 == 9 )
					{
						m2 = 0;
						if( m1 != 5 )
							m1++;
						else
						{
							m1 = 0;
							if( h2 != 9 || h2!=3 && h1 != 2 )
								h2++;
							else
							{
								h2 = 0;
								if( h1 != 2 )
									h1++;
								else
									h1 = 0;
							}
						 } 
					}
				}
			}
			cout << h1 << h2 << ":" << m1 << m2 << "\n";
		}
		else if( h1 == m2 && h2 == m1 )
		{
			if( m2 != 9 )
				m2++;
			else if( m2 == 9 )
			{
				m2 = 0;
				if( m1 != 5 )
					m1++;
				else
				{
					m1 = 0;
					if( h2 != 9 || h2!=3 && h1 != 2 )
						h2++;
					else
					{
						h2 = 0;
						if( h1 != 2 )
							h1++;
						else
							h1 = 0;
					}
				 } 
			}
			
			while( h1 != m2 || h2 != m1 )
			{
				if( m2 != 9 )
					m2++;
				else if( m2 == 9 )
				{
					m2 = 0;
					if( m1 != 5 )
						m1++;
					else
					{
						m1 = 0;
						if( h2 != 9 || h2!=3 && h1 != 2 )
							h2++;
						else
						{
							h2 = 0;
							if( h1 != 2 )
								h1++;
							else
								h1 = 0;
						}
					 } 
				}
			}
		
			cout << h1 << h2 << ":" << m1 << m2 << "\n";
			
			
		}
		else if( h1 == 0 )
		{
			while( h2 != m2 )
			{
				if( m2 != 9 )
					m2++;
				else if( m2 == 9 )
				{
					m2 = 0;
					if( m1 != 5 )
						m1++;
					else
					{
						m1 = 0;
						if( h2 != 9 || h2!=3 && h1 != 2 )
							h2++;
						else
						{
							h2 = 0;
							if( h1 != 2 )
								h1++;
							else
								h1 = 0;
						}
					 } 
				}
			}	
			
			cout << h1 << h2 << ":" << m1 << m2 << "\n";
		}
		else if( h2 >= 6 || h2 == 5 && m1 == 5 && m2 > h1 )
			cout << "20:02\n";
		else if( h1 == 2 && h2 == 3 )
		{
			if( m1 >= 3 && m2 > 2 )
				cout << "00:00\n";
			else
			{
				while( h1 != m2 || h2 != m1 )
				{
					if( m2 != 9 )
						m2++;
					else if( m2 == 9 )
					{
						m2 = 0;
						if( m1 != 5 )
							m1++;
						else
						{
							m1 = 0;
							if( h2 != 9 || h2!=3 && h1 != 2 )
								h2++;
							else
							{
								h2 = 0;
								if( h1 != 2 )
									h1++;
								else
									h1 = 0;
							}
						 } 
					}
				}
			
				cout << h1 << h2 << ":" << m1 << m2 << "\n";
			}
		}
		else
		{
			while( h1 != m2 || h2 != m1 )
			{
				if( m2 != 9 )
					m2++;
				else if( m2 == 9 )
				{
					m2 = 0;
					if( m1 != 5 )
						m1++;
					else
					{
						m1 = 0;
						if( h2 != 9 || h2!=3 && h1 != 2 )
							h2++;
						else
						{
							h2 = 0;
							if( h1 != 2 )
								h1++;
							else
								h1 = 0;
						}
					 } 
				}
			}
			
			cout << h1 << h2 << ":" << m1 << m2 << "\n";
		}
		
		
	}
	
	
}
