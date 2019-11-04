#include <iostream>
using namespace std;
#define ARRAY_SIZE 5  //矩阵的维数 
int getValue(int ,int);
int A[ARRAY_SIZE][ARRAY_SIZE]={ //上三角矩阵的内容 
       {7, 8, 12, 21, 9}, 
       {0, 5, 14,  17, 6}, 
       {0, 0, 7, 23, 24}, 
       {0, 0, 0,  32, 19}, 
       {0, 0, 0,  0,  8}};  
//一维数组的数组声明 
int B[ARRAY_SIZE*(1+ARRAY_SIZE)/2];  
int main()
{
    int i=0,j=0;
    int index;    
		cout<<"=========================================="<<endl;
		cout<<"上三角形矩阵："<<endl;
		for ( i = 0 ; i < ARRAY_SIZE ; i++ ) 
		{
			for ( j = 0 ; j < ARRAY_SIZE ; j++ ) 
		        cout<<"\t"<<A[i][j];
		    cout<<endl;    
		}
		//将右上三角矩阵压缩为一维数组 
		index=0;
		for ( i = 0 ; i < ARRAY_SIZE ; i++ ) 
		{
			for ( j = 0 ; j < ARRAY_SIZE ; j++ ) 
			{
                if(A[i][j]!=0) B[index++]=A[i][j];
            }
        }
		cout<<"=========================================="<<endl;
		cout<<"以一维数组的方式表示："<<endl;
		cout<<"\t[";
		for ( i = 0 ; i < ARRAY_SIZE ; i++ ) 
		{
			for ( j = i ; j < ARRAY_SIZE ; j++ ) 
		        cout<<" "<<getValue(i,j);
		}
		cout<<" ]";
		cout<<endl;    
		system("pause");
}
int getValue(int i, int j) {
        int index = ARRAY_SIZE*i - i*(i+1)/2 + j;
        return B[index];
}
