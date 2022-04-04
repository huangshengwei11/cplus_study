#include <iostream>

using namespace std;

int abc(int n)
{
	int i,b[32],q;
	for(i=0; i<32; i++) {
		b[i]=n&1;
		n=n>>1;
	}
	for(q=31; q>=0; q--) {
		cout<<b[q];
		if (q%8==0) {
			cout<<" ";
		}
	}

	cout<<endl;
	return 0;
}

int abc_f(float f)
{
	int n;
	memcpy(&n, &f, 4);
	abc(n);

	return 0;
}

int main()
{
	float k;
	do {
		scanf("%f",&k);
		abc_f(k);
	} while(k!=0);



	return 0;

}
