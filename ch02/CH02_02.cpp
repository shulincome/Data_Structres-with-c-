#include <iostream>
using namespace std;

int main()
{    
   int i,j,sum,max=0,no=1;
   int sale[3][6]={{112,76,95,120,98,68},
                   {90,120,88,112,108,120},
                   {108,99,126,90,76,98}};
   

   for(i=0;i<3;i++)
   {
      sum=0;
      for(j=0;j<6;j++)
       sum+=sale[i][j];//����ÿ�µ�ҵ�����  
      cout<<"����Ա"<<i+1<<"��ǰ���������ܽ��Ϊ "<<sum<<endl; 
      cout<<"------------------------------------"<<endl;  
   }
    
     for(i=0;i<6;i++)
   {
      sum=0;
      for(j=0;j<3;j++)
       sum+=sale[j][i];// ����ÿ�µ�ҵ�����  
      cout<<"��������Ա"<<i+1<<"�µ������ܽ��Ϊ "<<sum<<endl;
      cout<<"====================================="<<endl;  
   }  
   
   system("pause");
   return 0;
}


