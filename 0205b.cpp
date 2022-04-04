#include <iostream>

using namespace std;

int main()
{
	int month, year;
	int monthday[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	cin >> year;
	cin >> month;
	if (year % 100 == 0 && year % 400 != 0 || year % 4 != 0)
	{
		if (month == 12)
		{
			cout << 31 << endl;
			cout << 31 << endl;
		}
		else
		{
			cout << monthday[month] << endl;
			cout << monthday[month + 1] << endl;
		}
	}
	else
	{
		monthday[2]++;
		if (month == 12)
		{
			cout << 31 << endl;
			cout << 31 << endl;
		}
		else
		{
			cout << monthday[month] << endl;
			cout << monthday[month + 1] << endl;
		}
	}
	return 0;
}
