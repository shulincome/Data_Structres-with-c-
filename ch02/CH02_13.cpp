#include <iostream>
using namespace std;

int main()
{
	int M,N,row,col;
	cout<<"[����MxN�����ά��]"<<endl;
	cout<<"������ά��M: ";
	cin>>M;
	cout<<"������ά��N: ";
	cin>>N;
	
   	int *arrA = new int[M*N];	//������̬���� 
	int *arrB = new int[M*N];
 	cout<<"[��������������]"<<endl;
	for(row=1;row<=M;row++)
	{
		for(col=1;col<=N;col++)
		{
			cout<<"a"<<row<<col<<"=";
			cin>>arrA[(row-1)*N+(col-1)];
		}
	}
	cout<<"[������������Ϊ]"<<endl;
	for(row=1;row<=M;row++)
	{
		for(col=1;col<=N;col++)
		{
			cout<<arrA[(row-1)*N+(col-1)]<<"\t";
		}
		cout<<endl;
	}
	//���о���ת�õĲ���
	for(row=1;row<=N;row++)
		for(col=1;col<=M;col++)
			arrB[(col-1)*N+(row-1)]=arrA[(row-1)+(col-1)*N];

	cout<<"[ת�þ��������Ϊ]"<<endl;
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
