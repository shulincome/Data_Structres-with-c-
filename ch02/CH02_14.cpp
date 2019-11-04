#include <iostream>
using namespace std;

const int  ROWS = 3;
const int COLS = 3;
void MatrixAdd(int*,int*,int*,int,int);   //����ԭ��
int main()
{
	int A[ROWS][COLS] = {  {1,3,5},
						{7,9,11},
						{13,15,17}};
	int B[ROWS][COLS] = {  {9,8,7},
						{6,5,4},
						{3,2,1}};
	int C[ROWS][COLS] = {0};
	cout<<"[����A�ĸ���Ԫ��]"<<endl;  //�������A������
	for(int i=0;i<ROWS;i++)
	{
		for(int j=0;j<COLS;j++)
			cout<<A[i][j]<<"\t";
		cout<<endl;
	}
	cout<<"[����B�ĸ���Ԫ��]"<<endl;	//�������B������
	for(int i=0;i<ROWS;i++)
	{
		for(int j=0;j<COLS;j++)
			cout<<B[i][j]<<"\t";
		cout<<endl;
	}
	MatrixAdd(&A[0][0],&B[0][0],&C[0][0],ROWS,COLS);
	cout<<"[��ʾ����A�;���B��ӵĽ��]"<<endl;	//���A+B������
	for(int i=0;i<ROWS;i++)
	{
		for(int j=0;j<COLS;j++)
			cout<<C[i][j]<<"\t";
		cout<<endl;
	}
	system("pause");
}
void MatrixAdd(int* arrA,int* arrB,int* arrC,int dimX,int dimY)
{
	if(dimX<=0||dimY<=0)
	{
		cout<<"����ά���������0"<<endl;
		return;
	}
	for(int row=1;row<=dimX;row++)
		for(int col=1;col<=dimY;col++)
			arrC[(row-1)*dimY+(col-1)]=arrA[(row-1)*dimY+(col-1)]+arrB[(row-1)*dimY+(col-1)];
}
