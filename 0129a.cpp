#include <iostream>

using namespace std;

int main()
{
	float a = 31.125;
	int n;
	memcpy(&n, &a, 4);
	printf("%d, %f", n, a);

	return 0;
}
