#include <iostream>
using namespace std;

int main()
{
	int M,N,row,col;
	cout<<"[输入MxN矩阵的维数]"<<endl;
	cout<<"请输入维数M: ";
	cin>>M;
	cout<<"请输入维数N: ";
	cin>>N;
	
   	int *arrA = new int[M*N];	//声明动态数组 
	int *arrB = new int[M*N];
 	cout<<"[请输入矩阵的内容]"<<endl;
	for(row=1;row<=M;row++)
	{
		for(col=1;col<=N;col++)
		{
			cout<<"a"<<row<<col<<"=";
			cin>>arrA[(row-1)*N+(col-1)];
		}
	}
	cout<<"[输入矩阵的内容为]"<<endl;
	for(row=1;row<=M;row++)
	{
		for(col=1;col<=N;col++)
		{
			cout<<arrA[(row-1)*N+(col-1)]<<"\t";
		}
		cout<<endl;
	}
	//进行矩阵转置的操作
	for(row=1;row<=N;row++)
		for(col=1;col<=M;col++)
			arrB[(col-1)*N+(row-1)]=arrA[(row-1)+(col-1)*N];

	cout<<"[转置矩阵的内容为]"<<endl;
	for(row=1;row<=N;row++)
	{
		for(col=1;col<=M;col++)
		{
			cout<<arrB[(col-1)*N+(row-1)]<<"\t";
		}
		cout<<endl;
	}
	system("pause");
}
