#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	//����չʾ�����ֳ���
//	1; 'a'; "abcdefg";//���泣��
//	const int b = 10;//����ǳ������������ϻ��Ǳ��������������ﱣ�ֲ���
//#define MAX 101100;//����#define ����һ�����������������á�=����ֱ����ֵ
//	enum day//enum��ö�ٳ���
//	{
//		Monday, Tusday, Wensday, Thursday, Friday, Saturday, Sunday
//	};
//	int a = MAX;
//	int arr[10] = { 0 };//arr�����������˼��֮���ѧ��
//	printf("%d", a);
//	return 0;
//}
//	//�ַ���������""��������һ���ַ�
//	//�ַ�����-������һ����ͬ���͵�Ԫ����ɵ���
#include <string.h>
int main()
{
	char arr1[] = "hello";
	//�ַ����ڽ�β��λ�������˸�\0
	//\0�����ַ�����������˼
	char arr2[] = "abc";
	char arr3[] = { 'a','b','c' };
	//��һ���ַ����ĳ���
	int len = strlen(arr2);//��strlen(string length)Ҫ����string.h
	printf("%d\n", strlen(arr2));
	printf("%d\n", strlen(arr3));//�ٴ���֤\0���ַ����Ľ�����־
		
	/*printf("%s\n", arr2);
	printf("%s\n", arr3);*/
		



	return 0;
		
}
