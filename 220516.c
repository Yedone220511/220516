#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//�����ĵݹ飺
//������ڵĿ���Ϊ3������
//ջ�����ֲ������������β�,����ݹ�������ѭ���������overflow
//��������̬���ٵ��ڴ棬malloc��calloc����
//��̬����ȫ�ֱ�����static���εı���
// 
//�ݹ�һ��Ҫ���������������������ܵݹ飬�������޵ݹ�����
//ÿ�εݹ����֮��Ҫ���ӽ�����������Ҳ�����޵ݹ����

//void print(int n) //ͨ������print()��һ������ÿһλ�����������
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num); //���õݹ麯��print
//	return 0;
//}




//int my_strlen(char* str) //��������ʱ�������õݹ麯����������ַ�������
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int my_strlen(char* str) //��������ʱ����count�������������ַ�������
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//}
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr); //����ϵͳ����strlen()�����ַ����ĳ���
//	//printf("%d\n", len);
//	int len = my_strlen(arr); //�����Զ��庯��my_strlen()�����ַ����ĳ���
//	printf("len=%d\n", len);
//	return 0;
//}





//int fac1(int n) //ѭ����������n�Ľ׳�
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//
//int fac2(int n) //�ݹ麯������n�Ľ׳�
//{
//	if (n > 1)
//	{
//		return n * fac2(n - 1);
//	}
//	else
//		return 1;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//ret = fac1(n); //����ѭ������fac1����������n�Ľ׳�
//	ret = fac2(n);  //���õݹ麯��fac2����������n�Ľ׳�
//	printf("%d\n", ret);
//	return 0;
//}





//쳲���������1��1��2��3��5��8��13......n=��n-1��+��n-2��
//int count = 0;
//int fib1(int n)  //�ݹ麯�������n��쳲��������Ƕ��٣���n>40��ʱ������������Ϊ�ظ����㹤���ܶ�
//{
//	if (n == 3)
//	{
//		count++; //���Ե�����쳲��������������˼���
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}

int fib2(n) //����ѭ�������������n��쳲��������Ƕ��٣��ȵݹ��
{
	int a = 1;
	int b = 1;
	int c = 1;
	int i = 3;
	while (i <= n)
	{
		c = a + b;
		a = b;
		b = c;
		i++;
	}
	return c;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	//ret = fib1(n); //����fib1�����ݹ麯�������n��쳲��������Ƕ���
	ret = fib2(n); //����fib2����ѭ�����������n��쳲��������Ƕ���
	printf("ret=%d\n", ret);
	//printf("count=%d\n", count); //���Ե�����쳲��������ڵݹ麯���ﱻ�����˼���
	return 0;
}