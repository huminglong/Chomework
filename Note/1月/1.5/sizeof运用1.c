/*此程序运用sizeof函数，与%dt格式化输出查询数据类型占用的字节数*/
/*最后输出的内容是long int类型占用的字节数*/

#include <stdio.h>

int main(void){
	long int a=5;
	printf("%zd\n",sizeof(a));
	return 0;
}