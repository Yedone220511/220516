#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//函数的递归：
//计算机内的库存分为3个区：
//栈区：局部变量，函数形参,如果递归陷入死循环，会溢出overflow
//堆区：动态开辟的内存，malloc，calloc函数
//静态区：全局变量，static修饰的变量
// 
//递归一定要设置条件，满足条件才能递归，否则无限递归会溢出
//每次递归调用之后要更接近条件，否则也会无限递归溢出

//void print(int n) //通过函数print()把一个数的每一位单独按序输出
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
//	print(num); //调用递归函数print
//	return 0;
//}




//int my_strlen(char* str) //不创建临时变量，用递归函数计算输出字符串长度
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int my_strlen(char* str) //创建了临时变量count计数器，保存字符串长度
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
//	//int len = strlen(arr); //调用系统函数strlen()计算字符串的长度
//	//printf("%d\n", len);
//	int len = my_strlen(arr); //调用自定义函数my_strlen()计算字符串的长度
//	printf("len=%d\n", len);
//	return 0;
//}





//int fac1(int n) //循环函数计算n的阶乘
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
//int fac2(int n) //递归函数计算n的阶乘
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
//	//ret = fac1(n); //调用循环函数fac1（）来计算n的阶乘
//	ret = fac2(n);  //调用递归函数fac2（）来计算n的阶乘
//	printf("%d\n", ret);
//	return 0;
//}





//斐波那契数：1，1，2，3，5，8，13......n=（n-1）+（n-2）
//int count = 0;
//int fib1(int n)  //递归函数计算第n个斐波那契数是多少，当n>40的时候计算很慢，因为重复计算工作很多
//{
//	if (n == 3)
//	{
//		count++; //测试第三个斐波那契数被计算了几次
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}

int fib2(n) //利用循环函数来计算第n个斐波那契数是多少，比递归好
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
	//ret = fib1(n); //调用fib1（）递归函数计算第n个斐波那契数是多少
	ret = fib2(n); //调用fib2（）循环函数计算第n个斐波那契数是多少
	printf("ret=%d\n", ret);
	//printf("count=%d\n", count); //测试第三个斐波那契数在递归函数里被计算了几次
	return 0;
}