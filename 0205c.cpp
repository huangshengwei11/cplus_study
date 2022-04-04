#include <iostream>

using namespace std;

int main()
{
  int n, y, a, b, tmp, sum;
  int monthday[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  bool leap;
  cin >> n;

  while (n--)
  {
    cin >> y >> a >> b;
    if (a > b)
    {
      tmp = a;
      a = b;
      b = tmp;
    }
    sum = 0;
    leap = y % 4 == 0 && y % 100 != 0 || y % 400 == 0;
    for (int i = a; i < b; i++)
    {
      sum = sum + monthday[i];
      if (leap && i == 2)
        sum++;
    }
    if (sum % 7 == 0)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}
