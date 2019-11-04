#include <iostream>
using namespace std;

int main()
{
	int arrB[4][4],i,j;
    int arrA[4][4]={ {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} };
	cout<<"[请输入矩阵的内容]"<<endl;
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			cout<<arrA[i][j]<<"\t";
		}
		cout<<endl;
	}
	//进行矩阵转置的操作
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
			arrB[i][j]=arrA[j][i];

	cout<<"[转置矩阵的内容为]"<<endl;
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			cout<<arrB[i][j]<<"\t";
		}
		
        cout<<endl;//输出转置矩阵的内容  
	}
	system("pause");
}
