#include <iostream>
using namespace std;

int main()
{
	int arrB[4][4],i,j;
    int arrA[4][4]={ {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} };
	cout<<"[��������������]"<<endl;
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			cout<<arrA[i][j]<<"\t";
		}
		cout<<endl;
	}
	//���о���ת�õĲ���
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
			arrB[i][j]=arrA[j][i];

	cout<<"[ת�þ��������Ϊ]"<<endl;
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			cout<<arrB[i][j]<<"\t";
		}
		
        cout<<endl;//���ת�þ��������  
	}
	system("pause");
}
