#include <iostream>
//#include <iomanip>
#include <cstdio>
using namespace std;

int main()
{
	int monthday[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	bool leap;
	int y, m, d, day;
	char c;
	cin >> y >> c >> m >> c >> d;
	leap = y % 4 == 0 && y % 100 != 0 || y % 400 == 0;
	d++;
	day = monthday[m];
	
	if (leap && m == 2)
		day++;
	if (d > day)
	{
		m++;
		d = 1;
	}
	if (m == 13)
	{
		y++;
		m = 1;
		d = 1;
	}
	// cout<<y<<"-"<<setw(2)<<setfill('0')<<m<<"-"<<setw(2)<<setfill('0')<<d;
	printf("%d-%02d-%02d", y, m, d);
	return 0;
}
