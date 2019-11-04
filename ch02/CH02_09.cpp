#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	char Str[6][30]={	"张继    枫桥夜泊",       // 声明并初始化二维字符串数组
						"================",   // 省略了每个元素之间的大括号
						"月落乌啼霜满天",
						"江枫渔火对愁眠",
						"姑苏城外寒山寺",
						"夜半钟声到客船"	};
	int i;
	for (i=0; i<6; i++)
		cout << Str[i] << endl;                   // 输出字符串数组的内容
		
	system("pause");
	return 0;
}
