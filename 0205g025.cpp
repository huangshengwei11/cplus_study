/*����
�ڹ��⣬ÿ�µ�13�ź�ÿ�ܵ�����5���ǲ������ġ��ر��ǵ�13������ǡ��������5ʱ��������������֪ĳ���һ��һ��������w��������һ��һ���������꣬�����һ������13������������5���·ݣ�����С�����˳������·����֡���w=1..7��

����
������һ�У���һ��һ�����ڼ���w������1 <= w <= 7��
���
�����һ�����У�ÿ��һ���·ݣ���ʾ���µ�13���������塣*/
#include <iostream> 

using namespace std;
  
int main() {	
	int w;
	int monthday[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	cin>>w;
	for(int i=1;i<=12;i++){
		if(i==1) {
			w=(w+12)%7;
			if(w==5) cout<<i<<endl;
		}
		else {	
			w=(w+monthday[i-1])%7;
			if(w==5) cout<<i<<endl;
		}
	}
	
	return 0;
	 	
 }