#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	//下面展示下四种常量
//	1; 'a'; "abcdefg";//字面常量
//	const int b = 10;//这个是常变量，本质上还是变量，在作用域里保持不变
//#define MAX 101100;//利用#define 定义一个常量出来，不能用“=”，直接输值
//	enum day//enum来枚举常量
//	{
//		Monday, Tusday, Wensday, Thursday, Friday, Saturday, Sunday
//	};
//	int a = MAX;
//	int arr[10] = { 0 };//arr就是数组的意思，之后会学吧
//	printf("%d", a);
//	return 0;
//}
//	//字符串就是用""括起来的一串字符
//	//字符数组-数组是一组相同类型的元素组成的组
#include <string.h>
int main()
{
	char arr1[] = "hello";
	//字符串在结尾的位置隐藏了个\0
	//\0就是字符串结束的意思
	char arr2[] = "abc";
	char arr3[] = { 'a','b','c' };
	//求一下字符串的长度
	int len = strlen(arr2);//用strlen(string length)要引用string.h
	printf("%d\n", strlen(arr2));
	printf("%d\n", strlen(arr3));//再次验证\0是字符串的结束标志
		
	/*printf("%s\n", arr2);
	printf("%s\n", arr3);*/
		



	return 0;
		
}
