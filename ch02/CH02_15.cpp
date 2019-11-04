#include <iostream>
using namespace std;

void MatrixMultiply(int*,int*,int*,int,int,int);
int main()
{
	int M,N,P;
	int i,j;
	//矩阵A部分 
 	cout<<"请输入矩阵A的维数(M,N): "<<endl;
 	cout<<"M= ";
	cin>>M;
	cout<<"N= ";
	cin>>N;
	int *A = new int[M*N];
	cout<<"[请输入矩阵A的各个元素]"<<endl;
	for(i=0;i<M;i++)
		for(j=0;j<N;j++)
		    {
               cout<<"a"<<i<<j<<"=";
			   cin>>A[i*N+j];
            }
	//矩阵B部分 
 	cout<<"请输入矩阵B的维数(N,P): "<<endl;
	cout<<"N= ";
	cin>>N;
	cout<<"P= ";
	cin>>P;
	int *B = new int [N*P];
	cout<<"[请输入矩阵B的各个元素]"<<endl;
	for(i=0;i<N;i++)
		for(j=0;j<P;j++)
        {
           cout<<"b"<<i<<j<<"=";
		   cin>>B[i*P+j];
        }	
	int *C = new int [M*P];
	MatrixMultiply(A,B,C,M,N,P); //调用函数 
	cout<<"[AxB的结果是]"<<endl;
	for(i=0;i<M;i++)
	{
		for(j=0;j<P;j++)
			cout<<C[i*P+j]<<"\t";
		cout<<endl;
	}
	system("pause");
}
//进行矩阵相乘 
void MatrixMultiply(int* arrA,int* arrB,int* arrC,int M,int N,int P)
{
	if(M<=0||N<=0||P<=0)
	{
		cout<<"[错误:维数M,N,P必须大于0]"<<endl;
		return;
	}
	for(int i=0;i<M;i++)
		for(int j=0;j<P;j++)
		{
			int Temp;
			Temp = 0;
			for(int k=0;k<N;k++)
				Temp = Temp + arrA[i*N+k]*arrB[k*P+j];
			arrC[i*P+j] = Temp;
		}
}
