#include <iostream>
#include <cstdlib>
#include <cstring>	
#include <cctype>		//包括此判断函数文件

using namespace std;

int main()
{
	int lower = 0;
	char string[40];
	
	cout<<"请输入字符串:"; 
    cin.getline(string,40);			//输入的字符串有40个字符 
	int len = strlen(string);
	for (int i = 0; i <= len; i++)	
		if (islower(string[i]) != 0)		//是小写字符则加1	
			lower++;
	cout <<string<<"字符串的小写字符有 " << lower << "个"<<endl;
	
	system("pause");
	return 0;
}

