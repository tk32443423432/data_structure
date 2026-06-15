#include "add.h"


//void Print(int n)
//{
//	if (n > 9)
//	{
//		Print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int Fact(int n)
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fact(n - 1);
//	}
//}
//int main()
//{	
//	//int m = 0;
//	//printf("Please enter a number: ");
//	//scanf("%d", &m);
//	//Print(m);
//	
//
//	int n = 0;
//	printf("Please enter a number: ");
//	scanf("%d", &n);
//	Fact(n);
//	return 0;
//}


// 计算n的阶乘
//int Fact(int n)
//{
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	printf("Please enter a number: ");
//	scanf("%d", &n);
//	int num = Fact(n);
//	printf("%d", num);
//	return 0;
//}


//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	int num = Fib(m);
//	printf("%d", num);
//	return 0;
//}

//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)
//	{
//		count++;
//	}
//	else if (n <= 2)
//	{
//		return 1;
//	}
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	printf("\ncount = %d\n", count);
//}


//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;	
//}


//int main()
//{
//	int n = 0;
//	printf("Please enter a number: ");
//	scanf("%d", &n);
//	int num = Fib(n);
//	printf("%d", num);
//	return 0;
//}


//int main()
//{
//	int num = 10;
//	int n = num << 1;  // 左移操作符
//	printf("n = %d\n", n);
//	printf("num = %d\n", num);  // 即便左移，但是num的值也是不会改变的
//	return 0;
//}


