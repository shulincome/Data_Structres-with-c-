#include <iostream>
using namespace std;

int main()
{
     int Score[5]={ 87,66,90,65,70 };    
      //定义整数数组Score[5], 并设置5个成绩 
     int count, Total_Score=0;
     for (count=0; count < 5; count++)		// 执行 for 循环读取学生成绩 
     {
       cout<<"第"<<count+1<<"位学生的分数:"<<Score[count]<<endl;  
       Total_Score+=Score[count];		//由数组中读取分数并计算总分
      }
      cout<<"-------------------------"<<endl;
      cout<<"5位学生的总分:"<<Total_Score<<endl;  
     //输出成绩总分
     
     system("pause");
     return 0;
}
