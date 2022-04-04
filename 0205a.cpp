#include <iostream>

using namespace std;

int main()
{
	int month;
	int monthday[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	cin >> month;
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

	return 0;
}
