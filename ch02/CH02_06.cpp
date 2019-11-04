#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	int i;		//用于计算字符串的长度
	char str[30];
	char str1[30];
	cout<<"请输入字符串:";
	//输入字符串
	cin>>str;
	cout<<"输入的字符串为:"<<str<<endl;
	//利用for循环计算i,并将输入的字符串复制到str1字符串
	for(i=0; str[i]!='\0';i++)
	{
 		str1[i]=str[i];	//逐一进行字符拷贝 
    }
    str1[i]='\0';		//在计算字符串长度时，并不包含字符串结尾字符'\0' 
 	cout<<"此字符串有"<<i<<"个字符"<<endl;
 	cout<<"原字符串str="<<str<<endl;
	cout<<"复制后字符串str1="<<str1<<endl;
 	
    system("pause");
    return 0;
}
