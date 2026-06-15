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
//	int n = num << 1;  // 左移操作符，是使数值变大
//	printf("n = %d\n", n);
//	printf("num = %d\n", num);  // 即便左移，但是num的值也是不会改变的
//	return 0;
//}

//int main()
//{
//	int num = 10;
//	int n = num >> 1;  // 右移操作符，好像是使数值变小
//	printf("n = %d\n", n);
//	printf("num = %d\n", num);
//	return 0;
//}



//int main()
//{
//	int a = 6;
//	int b = 3;
//	printf("%d\n", a & b);
//	return 0;
//}


//int main()
//{
//	int num1 = -3;
//	int num2 = 5;
//	printf("%d\n", num1 & num2);  // 5
//	printf("%d\n", num1 | num2);  // -3
//	printf("%d\n", num1 ^ num2);  // -8
//	printf("%d\n", ~0);
//	return 0;
//}


//int main()
//{   
//	// 不创建第三个临时变量，对a和b进行数值交换
//	int a = 0;
//	int b = 0;
//	printf("请输入两个数字: ");
//	scanf("%d %d", &a, &b);
//	printf("交换前: \n");
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后: \n");
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//
//
//	return 0;
//}



// 求一个整数存储在内存中的二进制1的个数
//int main()
//{
//	int num = 0;
//	int count = 0;
//	while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//			num = num / 2;
//		}
//		printf("二进制中的1的个数 = %d\n", count);
//
//	}
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((num >> i) & i) == 1)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//
//}


//int main()
//{
//	// 编写代码，将13的二进制序列的第5位修改为1，然后再改回0
//	int n = 13;
//	int k = 5;
//	n |= (1 << (k - 1));
//	printf("%d\n", n); // 29
//
//	n &= ~(1 << (k - 1));  
//	printf("%d\n", n); // 13
//	return 0;
//}


//int main()
//{
//	int arr[10]; // 创建数组
//	arr[9] = 10; // 实用下标引用操作符
//
//	return 0;
//}


//void test1()
//{
//	printf("hehe\n");
//}
//void test2(const char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	test1();  // 这里的括号就是作为函数调用操作符
//	test2("Hello World.");  // 这里需要传参数，同时()这个括号也是函数调用操作符
//	return 0;
//}


// 结构体
//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char id[20];
//};


// 代码1：变量的定义
//struct Point
//{
//	int x;
//	int y;	
//}p1;		// 声明类型的同时定义变量p1
//
//struct Point p2;  // 定义结构体变量p2
//
//
//// 代码2：初始化
//struct Point p3 = { 10,20 };
//
//struct Stu
//{
//	char name[15];
//	int age;  // 年龄
//};
//
//struct Stu s1 = { "张三",20 };
//struct Stu s2 = { .name = "lisi", .age = 19 };
//
//
//// 代码3
//struct Node
//{
//	int data;
//	struct Point p;
//	struct Node* next;
//}n1 = { 10,{4,5}, NULL};   // 结构体嵌套初始化
//
//struct Node n2 = { 20,{5,6}, NULL };  // 结构体嵌套初始化 


//struct Student
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//struct Test
//{
//	int n;
//	char c;
//	struct Student s;
//	double d;
//};
//
//int main()
//{
//	struct Student s1 = { "lisi",18,90.2f };
//	struct Student s2 = { .name = "张三", .age = 19, .score = 903.2f };
//	struct Test t = { 100,'q',{"zhangsan",12,90.31f},30.33 };
//
//	// 打印结构体的数据
//	printf("%s %d %f\n", s1.name, s1.age, s1.score);  // 打印的是Student结构体
//	printf("%d %c %s %d %.1f %.2f\n", t.n, t.c, s1.name, s1.age, s1.score, t.d);  // 打印的是Test中的结构体
//	return 0;
//}


//struct Point
//{
//	int x;
//	int y;
//};
//
//int main()
//{
//	struct Point p = { 3,4 };
//	struct Point* ptr = &p;
//	ptr->x = 10;
//	ptr->y = 20;
//	printf("x = %d y = %d\n", ptr->x, ptr->y);  // x = 10, y = 20
//	return 0;
//}



//struct Stu
//{
//	char name[15];  // 名字
//	int age;  // 年龄
//};
//
//void print_stu(struct Stu s)
//{
//	printf("%s %d\n", s.name, s.age);
//}
//
//void set_stu(struct Stu* ps)
//{
//	strcpy(ps->name, "李四");
//	ps->age = 28;
//}
//
//int main()
//{
//	struct Stu s = { "张三", 20 };
//	print_stu(s);
//	set_stu(&s);
//	print_stu(s);
//	return 0;
//}


