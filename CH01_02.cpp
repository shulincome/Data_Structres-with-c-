/*
[����]:CH01_02.cpp
[ʾ��]:쳲��������еĵݹ����
*/
#include<iostream>
using namespace std;

int fib(int);			//fib()������ԭ������

int main()
{
   int i,n;
   printf("������Ҫ����ڼ����������:");
   scanf("%d",&n); 
   for(i=0;i<=n;i++)			// ����ǰ1n��������� 
      printf("fib(%d)=%d\n",i,fib(i));

   system("pause");
   return 0;
}

int fib(int n) 				//���庯��fib()
{
    	
   if (n==0)
      return 0; 			// ���n=0 �򷵻� 0
   else if(n==1 || n==2)	//���n=1��n=2���򷵻�1 
      return 1;
   else						//���򷵻� fib(n-1)+fib(n-2) 
      return (fib(n-1)+fib(n-2));
}
