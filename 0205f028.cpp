#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main()
{
	int n, y = 2000, m = 1, d = 1, wd, day;
	bool leap;
	int monthday[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	string weekday[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
	cin >> n;
	wd = (6 + n) % 7;
	while (n--)
	{

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
	}
	printf("%d-%02d-%02d", y, m, d);
	cout << " " << weekday[wd] << endl;
	return 0;
}
