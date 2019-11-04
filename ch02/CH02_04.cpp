#include <iostream>
using namespace std;

int main()
{    
   int i,j,k;
   int sum=0;
   
   int arr[4][3][3]={{{1,-2,3},{4,5,-6},{8,9,2}},
           {{7,-8,9},{10,11,12},{-1,3,2}},
           {{-13,14,15},{16,17,18},{3,6,7}},
           {{19,20,21},{-22,23,24},{-6,9,12}}};	//声明并设置数组的元素值  

   for(i=0;i<4;i++)
      {
      for(j=0;j<3;j++)
        {
        for(k=0;k<3;k++)
         {
             sum+=arr[i][j][k];
             if (arr[i][j][k]<0)
                  arr[i][j][k]=0;		// 元素值为负数,则归零
             cout<<arr[i][j][k]<<"\t";
         }
             cout<<endl;
         }
             cout<<endl;
         }  
   cout<<"---------------------------"<<endl; 
   cout<<"原数组的所有元素值总和="<<sum<<endl;
   cout<<"---------------------------"<<endl; 
   
   system("pause");
   return 0;
}


