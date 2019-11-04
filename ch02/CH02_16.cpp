#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
const int _ROWS = 8;		//定义行数
const int _COLS = 9;		//定义列数
const int _NOTZERO = 8;		//定义稀疏矩阵中不为0的个数

int main ()
{  
	int i,j,tmpRW,tmpCL,tmpNZ;
	int temp=1;
	int Sparse[_ROWS][_COLS];		//声明稀疏矩阵
	int Compress[_NOTZERO][3];		//声明压缩矩阵
	srand(time(NULL));
	for (i=0;i<_ROWS;i++)			//将稀疏矩阵的所有元素设为0
		for (j=0;j<_COLS;j++)
			Sparse[i][j]=0;
	tmpNZ=_NOTZERO;
	for (i=1;i<tmpNZ+1;i++)
	{
		tmpRW = rand()%_ROWS;
		tmpCL = rand()%_COLS;
		if(Sparse[tmpRW][tmpCL]!=0)//避免同一个元素设定两次数值而造成压缩矩阵中有0
			tmpNZ++;
		Sparse[tmpRW][tmpCL]=i; //随机产生稀疏矩阵中非零的元素值
	}
	cout<<"[稀疏矩阵的各个元素]"<<endl; //输出稀疏矩阵的各个元素
	for (i=0;i<_ROWS;i++)
	{  
		for (j=0;j<_COLS;j++)
			cout<<"["<<Sparse[i][j]<<"] ";
		cout<<endl;
	}
	//开始压缩稀疏矩阵
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
	cout<<"[稀疏矩阵压缩后的内容]"<<endl; //输出压缩矩阵的各个元素
	for (i=0;i<_NOTZERO+1;i++)
	{  
		for (j=0;j<3;j++)
			cout<<"["<<Compress[i][j]<<"] ";
		cout<<endl;
	}
	system("pause");
}
