/*
[名称]:CH01_02.cpp
[示范]:斐波拉契数列的递归程序
*/
#include<iostream>
using namespace std;

int fib(int);			//fib()函数的原型声明

int main()
{
   int i,n;
   printf("请输入要计算第几个斐氏数列:");
   scanf("%d",&n); 
   for(i=0;i<=n;i++)			// 计算前1n个斐氏数列 
      printf("fib(%d)=%d\n",i,fib(i));

   system("pause");
   return 0;
}

int fib(int n) 				//定义函数fib()
{
    	
   if (n==0)
      return 0; 			// 如果n=0 则返回 0
   else if(n==1 || n==2)	//如果n=1或n=2，则返回1 
      return 1;
   else						//否则返回 fib(n-1)+fib(n-2) 
      return (fib(n-1)+fib(n-2));
}
