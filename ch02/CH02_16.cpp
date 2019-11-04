#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
const int _ROWS = 8;		//��������
const int _COLS = 9;		//��������
const int _NOTZERO = 8;		//����ϡ������в�Ϊ0�ĸ���

int main ()
{  
	int i,j,tmpRW,tmpCL,tmpNZ;
	int temp=1;
	int Sparse[_ROWS][_COLS];		//����ϡ�����
	int Compress[_NOTZERO][3];		//����ѹ������
	srand(time(NULL));
	for (i=0;i<_ROWS;i++)			//��ϡ����������Ԫ����Ϊ0
		for (j=0;j<_COLS;j++)
			Sparse[i][j]=0;
	tmpNZ=_NOTZERO;
	for (i=1;i<tmpNZ+1;i++)
	{
		tmpRW = rand()%_ROWS;
		tmpCL = rand()%_COLS;
		if(Sparse[tmpRW][tmpCL]!=0)//����ͬһ��Ԫ���趨������ֵ�����ѹ����������0
			tmpNZ++;
		Sparse[tmpRW][tmpCL]=i; //�������ϡ������з����Ԫ��ֵ
	}
	cout<<"[ϡ�����ĸ���Ԫ��]"<<endl; //���ϡ�����ĸ���Ԫ��
	for (i=0;i<_ROWS;i++)
	{  
		for (j=0;j<_COLS;j++)
			cout<<"["<<Sparse[i][j]<<"] ";
		cout<<endl;
	}
	//��ʼѹ��ϡ�����
	Compress[0][0] = _ROWS;
	Compress[0][1] = _COLS;
	Compress[0][2] = _NOTZERO;
	for (i=0;i<_ROWS;i++)
		for (j=0;j<_COLS;j++)
			if (Sparse[i][j] != 0)
			{  
				Compress[temp][0]=i;
				Compress[temp][1]=j;
				Compress[temp][2]=Sparse[i][j];
				temp++;
			}
	cout<<"[ϡ�����ѹ���������]"<<endl; //���ѹ������ĸ���Ԫ��
	for (i=0;i<_NOTZERO+1;i++)
	{  
		for (j=0;j<3;j++)
			cout<<"["<<Compress[i][j]<<"] ";
		cout<<endl;
	}
	system("pause");
}
