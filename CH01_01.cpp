/*
[����]:CH01_01.cpp
[ʾ��]:�õݹ麯���� 0-4 �׳˵�ֵ
*/
#include <iostream>
using namespace std;
int recursive(int);  //����ԭ��
int main(void)
{  
	for (int i=0;i<5;i++)
		cout<<i<<" �׳�ֵΪ "<<recursive(i)<<endl;
	system("pause");      
    return 0;
}
int recursive(int i)
{  
	int sum;
	if(i == 0) 					//�ݹ���ֹ������
		return(1);
	else
		sum = i * recursive(i-1);	//sum=n*(n-1)! ����ֱ�ӵ��ñ���
	return sum;
}
