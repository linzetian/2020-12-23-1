//自定义my_memcpy函数，用于非重叠之间的内存拷贝函数
//void * memcpy ( void * destination, const void * source, size_t num );
#include<stdio.h>
void* my_memcpy(void* dest, const void* src, size_t num)//void*通用类型，需要什么类型再强制转换为对于类型
{
	char* prt = (char*)dest;
	while (num--)
	{
		*(char*)prt = *(char*)src;
		++(char*)prt;
		++(char*)src;
	}
	*prt = '\0';
	return prt;
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[40];
	my_memcpy(arr2, arr1, 4);
	printf("%s", arr2);
	return 0;
}