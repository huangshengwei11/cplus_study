#include <iostream> 

using namespace std;
 
int main() {
	int a;
	float b;
	double c;
	char d;
	
	printf("int %d\n", sizeof(a) );
	printf("float %d\n", sizeof(b) );
	printf("double %d\n", sizeof(c) );
	printf("char %d\n", sizeof(d) );
	
//	int n=0;
//	for(int i=1;i>0;i++) {
//		printf("%d ", i);
//		n++;
//		if (n>1000) {
//			printf("\n");
//			n = 0;
//		}
//	}

//	d = 0;
//	for(int i=0;i<128; i++) {
//		printf("%d, %c\n", (int)d, d);
//		d++;
//	}

	d = 'A';
	printf("[%c], %X, %x\n", d, 31, 31);
	
	return 0;
	 	
}
