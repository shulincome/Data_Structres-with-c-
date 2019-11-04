#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    char *name[4] = { "Justinian", "Momo", "Becky", "Bush" };	//一维指针数组 
    char name1[4][10] = { "Justinian", "Momo", "Becky", "Bush" };//二维字符串数组  
    int i;
    cout<<"---------- 一维指针数组的存储方式 --------------"<<endl;
    for ( i = 0; i < 4; i++ )
    {
        cout<<"name["<<i<<"] = \""<<name[i]<<"\"\t";
        cout<<"所占地址："<<(int *)name[i]<<endl; //输出name[i]所占地址   
    }
    cout<<"------------ 二维字符串数组的存储方式--------------"<<endl;
    for ( i = 0; i < 4; i++ )
    {
        cout<<"name1["<<i<<"] = \""<<name1[i]<<"\"\t";
         cout<<"所占地址："<<(int *)name1[i]<<endl; //输出name1[i]所占地址  
     }    
    system("pause");
    return 0;
}

