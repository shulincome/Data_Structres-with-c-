/*
[名称]:CH01_01.cpp
[示范]:用递归函数求 0-4 阶乘的值
*/
#include <iostream>
using namespace std;
int recursive(int);  //函数原型
int main(void)
{  
	for (int i=0;i<5;i++)
		cout<<i<<" 阶乘值为 "<<recursive(i)<<endl;
	system("pause");      
    return 0;
}
int recursive(int i)
{  
	int sum;
	if(i == 0) 					//递归终止的条件
		return(1);
	else
		sum = i * recursive(i-1);	//sum=n*(n-1)! 所以直接调用本身
	return sum;
}
