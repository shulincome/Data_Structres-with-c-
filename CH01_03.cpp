/*
[����]:CH01_03.cpp
[ʾ��]:���ú�ŵ�����������ͬ�������������ƶ�����
*/
#include <iostream>
using namespace std;
void hanoi(int, int, int, int);	// ����ԭ��
int main(void)
{  
	int j;
	cout<<"����������������";
	cin>>j;
	hanoi(j,1, 2, 3);
	system("pause");      
    return 0;
}
void hanoi(int n, int p1, int p2, int p3)
{  
	if (n==1)
		cout<<"���Ӵ� "<<p1<<" �Ƶ� "<<p3<<endl;
	else
	{  
		hanoi(n-1, p1, p3, p2);
		cout<<"���Ӵ� "<<p1<<" �Ƶ� "<<p3<<endl;
		hanoi(n-1, p2, p1, p3);
	}
}
