/*
[名称]:CH01_03.cpp
[示范]:利用汉诺塔函数求出不同盘子数的盘子移动步骤
*/
#include <iostream>
using namespace std;
void hanoi(int, int, int, int);	// 函数原型
int main(void)
{  
	int j;
	cout<<"请输入盘子数量：";
	cin>>j;
	hanoi(j,1, 2, 3);
	system("pause");      
    return 0;
}
void hanoi(int n, int p1, int p2, int p3)
{  
	if (n==1)
		cout<<"盘子从 "<<p1<<" 移到 "<<p3<<endl;
	else
	{  
		hanoi(n-1, p1, p3, p2);
		cout<<"盘子从 "<<p1<<" 移到 "<<p3<<endl;
		hanoi(n-1, p2, p1, p3);
	}
}
