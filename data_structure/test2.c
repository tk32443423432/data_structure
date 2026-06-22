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


//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%p", &a);
//	return 0;
//}



	//int a = 10;
	//int* pa = &a;

	//char ch = 'w';
	//char * pc = &ch;
	//printf("%p\n", pc);

	//int a = 100;
	//int* pa = &a;
	//*pa = 0;
	//printf("%d\n", a);
	//printf("%p\n", &a);


	//printf("%zd\n", sizeof(char *));
	//printf("%zd\n", sizeof(short *));
	//printf("%zd\n", sizeof(int *));
	//printf("%zd\n", sizeof(double *));


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i)); // p + i 这里就是指针+整数
//		// printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//int my_strlen(char* s)
//{
//	char* p = s;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return p - s;
//}
//int main()
//{
//	printf("%d\n", my_strlen("abc"));
//	return 0;
//}


// 写一个代码打印1-100之间所有3的倍数的数字
//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//
//	return 0;
//}


//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	int temp = 0;
//	while (b != 0)
//	{
//		temp = a % b;
//		a = b;
//		b = temp;
//	}
//	printf("最大公约数是：%d", a);
//	return 0;
//}



// 猜数字游戏

//void game()
//{
//	int r = rand() % 100 + 1;
//	int guess = 0;
//	int count = 5; // 只能猜5次
//	while (1)
//	{
//		printf("\n你还有%d次机会\n", count);
//		printf("请猜数字: ");
//		scanf("%d", &guess);
//		if (guess < r)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > r)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//		count--;
//		if (count == 0)
//		{
//			printf("你失败了，正确数字是：%d\n", r);
//			break;
//		}
//	}
//}
//
//void menu()
//{
//	printf("输入1，开始游戏！\n");
//	printf("输入0，结束游戏！\n");
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请输入选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("游戏结束！");
//			break;
//		default:
//			printf("选择错误，重新开始！");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}



//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-4d", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


// 编写程序数一下 1到 100 的所有整数中出现多少个数字9
//int main()
//{
//	int count = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		int n = i;
//		while (n > 0)
//		{
//			if (n % 10 == 9)
//			{
//				count++;
//			}
//			n /= 10;
//		}
//	}
//	printf("一共有：%d个\n", count);
//	return 0;
//}


//int main()
//{
//	/*
//	一、什么是素数？
//	素数（质数）：只能被1和自身整除的数
//	例如：
//	● 7 是素数（只能被 1 和 7 整除）
//	● 8 不是（可以被 2、4 整除）
//	*/
//	// 打印100~200之间的素数
//	for (int i = 100; i <= 200; i++)
//	{
//		int is_prime = 1; // 默认是素数
//
//		// 判断i是否是素数
//		for (int j = 2; j < i; j++)
//		{
//			if (i % j == 0)  // 不是素数
//			{
//				is_prime = 0;   
//				break;
//			}
//		}
//
//		if (is_prime == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


// 打印1000年到2000年之间的闰年
//int main()
//{
//	for (int year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			printf("%d " ,year);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	// 编写程序：数一下 1到100 的所有整数中出现多少个数字9
//	int count = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		int n = i;
//		while (n > 0)
//		{
//			if (n % 10 == 9)
//			{
//				count++;
//			}
//			n /= 10;
//		}
//	}
//	printf("数字9一共出现了 %d 次\n", count);
//}



//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n; i++)  // 外循环为行
//		{
//			for (int j = 0; j < n; j++)  // 内循环为列
//			{
//				if (i == j || i + j == n - 1)
//					//最关键的地方，正斜线为[i][i]处是*， 反斜杠为[i][n-1-j]处是*，一行打印1个或2个*
//					printf("*");
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


// 指针-指针
//int my_strlen(char *s)
//{
//	char* p = s;
//	while (*p != '\0')
//		p++;
//	return p - s;
//}
//int main()
//{
//	printf("%d\n", my_strlen("abc"));
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[0];
//	printf("&arr = %p\n", &arr);  // 这三个指向的数组地址是一样的
//	printf("&arr[0] = %p\n", &arr[0]);  // 数组的首元素地址和arr[0]是一个地址的
//	printf("p = %p\n", p);  // p是指针指向的元素
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (p < arr + sz)  // 指针的大小比较
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}



//int main()
//{
//	//int m = 0;
//	//m = 20;
//	//const int n = 0;
//	//n = 20;  // 此时n被const常量所修饰，所以不能修改值
//
//
//	const int n = 0;
//	printf("n = %d\n", n);
//	int* p = &n;
//	*p = 20;
//	printf("n = %d\n", n);
//
//}


//int main()
//{
//	int* p1;
//	int* const p;
//	return 0;
//}


//void test1()
//{
//	int n = 10;
//	int m = 20;
//	int* p = &n;
//	*p = 20;
//	p = &m;
//}
//
//void test2()
//{
//
//}



// 代码2 - 测试const放在*的左边
//void test2()
//{
//	int n = 10;
//	int m = 20;
//	const int* p = &n;
//	// *p = 20; // no
//	p = &m;  // yes
//	return 0;
//}
//
//
//
//int main()
//{
//	test2();
//	return 0;
//}



//int main()
//{
//	//int* p; // 局部变量指针未初始化，默认为随机值
//
//
//	int arr[10] = { 0 };
//	int* p = &arr[0];
//	int i = 0;
//	for (i = 0; i <= 11; i++)
//	{
//		// 当指针指向的范围超出数组arr的范围时，p就是野指针
//		*(p++) = i;
//	}
//	return 0;
//}



//int* test()
//{
//	int n = 100;
//	return &n;
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);	
//	return 0;
//}


//int mian()
//{
//	int num = 0;
//	int* p1 = &num;
//	int* p2 = NULL;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[0];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p++) = i;
//	}
//	p = NULL;
//	// 下次使用时，判断p不为空的时候再使用
//	p = &arr[0];
//
//	if (p != NULL)
//	{
//
//	}
//	return 0;
//}



//size_t strlen(const char* str);

//int main()
//{
//	char a = "abcde";
//	printf("%c", strlen(a));
//	return 0;
//}

//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);  // 断言
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}


//void Swap(int* px, int* py)
//{
//	int temp = 0;
//	temp = *px;
//	*px = *py;
//	*py = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("调用前：a = %d b = %d\n",a,b);
//	Swap(&a, &b);
//	printf("调用后：a = %d b = %d\n", a, b);
//
//
//	return 0;
//}


//int main()
//{
//	// 1. 定义一个长度为10的整型数组存放数据
//	int arr[10] = { 0 };
//	int sum = 0;
//	// 2. 使用循环遍历10个整数
//	double avg = 0.0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("请输入10个整数：\n");
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		sum += arr[i];
//	}
//	avg = sum / 10.0;
//	printf("平均值为：%.2f\n", avg);
//	return 0;
//}


//int main()
//{
//	// 将数组A中的内容和数组B中的内容进行交换（数组一样大）
//	int A[] = { 1,2,3,4,5 };
//	int B[] = { 6,7,8,9,10 };
//	int sz = sizeof(A) / sizeof(A[0]);
//
//	for (int i = 0; i < sz; i++)
//	{
//		int temp = A[i];
//		A[i] = B[i];
//		B[i] = temp;
//	}
//
//	printf("A: ");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", A[i]);
//	}
//	printf("\nB: ");
//	for (int j = 0; j < sz; j++)
//	{
//		printf("%d ", B[j]);
//	}
//	return 0;
//}


// 求10 个整数中最大值
//int main()
//{
//	int num[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(num) / sizeof(num[0]);
//	int max = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		for (int j = 1; j < sz; j++)
//		{
//			if (num[i] < num[j])
//			{
//				max = num[j];
//			}
//			else
//			{
//				max = num[i];
//			}
//		}
//	}
//	printf("最大值是：%d\n", max);
//	return 0;
//}


// 二分查找-函数实现
// 功能：在一个升序数组中查找指定的数值，找到了就返回下标，找不到就返回-1
//int bin_search(int arr[], int left, int right, int key)
//{
//	// arr是查找的数组
//	// lefr 是数组的左下标
//	// right 数组的右下标
//	// key 要查找的数字
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//
//		if (arr[mid] == key)
//		{
//			return mid;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			right = mid - 1;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 5;
//	int result = bin_search(arr, 0, 9, key);
//
//	if (result != -1)
//	{
//		printf("找到了！下标是：%d\n", result);
//	}
//	else
//	{
//		printf("没找到！\n");
//	}
//	return 0;
//}

//void Multiplication_Table(int num)
//{
//	/*
//	实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//	如：输入9，输出9*9口诀表，输出12，输出12*12的乘法口诀表。
//	*/
//	for (int i = 1; i <= num; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			int result = i * j;
//			printf("%d*%d = %d ", i, j, result);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	Multiplication_Table(input);
//	return 0;
//}


//void year_leap(int year)
//{
//	// 实现函数判断year是不是闰年
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		printf("%d年是闰年\n", year);
//	}
//	else
//	{
//		printf("%d年不是闰年\n", year);
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int year = 2020;
//	year_leap(year);
//	return 0;
//}


// 函数判断素数
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



// 1. 初始化数组为全0
void init(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

// 2. 实现print()，打印数组的每一个元素
//void print(int arr[], int sz)
//{
//
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

// 3. 实现reverse()函数，完成数组元素的逆置
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{	
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//init(arr, sz);
//	printf("逆置前的数组元素：\n");
//	print(arr,sz);
//	printf("\n");
//	reverse(arr, sz);
//	printf("逆置后的数组元素：\n");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}



// 喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水

//int main()
//{
//	int money = 20;
//	int bottle = 0;   // 空瓶
//	int total = 0;    // 总共喝了多少瓶
//
//	// 第一步：先买汽水
//	total = money;  // 20块钱可以买20瓶汽水
//	bottle = money;  // 20瓶汽水喝完了，就会产生20个空瓶
//
//	// 第二步：用空瓶换汽水
//	while (bottle >= 2)  // 只要空瓶数量大于等于2，循环就会一直下去
//	{
//		int new_soda = bottle / 2;  // 两个空瓶换一瓶汽水,
//		total += new_soda;
//
//		bottle = bottle % 2 + new_soda;
//	}
//	printf("一共可以喝：%d 瓶汽水\n", total);
//	return 0;
//}



// 打印菱形
//int main()
//{
//	int i = 0; // 行数
//	int j = 0; // 每行的空格数
//	int k = 0; // 每行的星号数
//	
//	// 打印一个7行的菱形
//	// 上半部分(4行)
//	for (i = 1; i <= 4; i++)
//	{
//		for (j = 1; j <= 4 - i; j++)
//		{
//			printf(" ");  // 打印空格
//		}
//		for (k = 1; k <= 2 * i - 1; k++)
//		{
//			printf("*");  // 打印*星号
//		}
//		printf("\n");
//	}
//
//	// 下半部分(3行)
//	for (i = 1; i <= 3; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (k = 1; k <= 7 - 2 * i; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//int Fun(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * Fun(n + 1);
//}
//
//int main()
//{
//	int result = Fun(2);
//	printf("%d\n", result);
//	return 0;
//}


// 打印100~1000之间的水仙花数
//int main()
//{
//	int n = 0, hun = 0, ten = 0, units = 0;
//				// 百位  十位     个位
//	printf("水仙花数有：");
//	for (n = 100; n < 1000; n++)
//	{
//		hun = n / 100;
//		ten = (n / 10) % 10;
//		units = n % 10;
//		if (n == hun * hun * hun + ten * ten * ten + units * units * units)
//		{
//			printf("%d ", n);
//		}
//	}
//	printf("\n");
//
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int term = 0; // 当前项
//	int sum = 0; // 累加求和用的
//
//	printf("请输入一个数字：");
//	scanf("%d", &n);
//	for (int i = 0; i < 5; i++)
//	{
//		term = term * 10 + n;
//		sum += term;
//	}
//	printf("前 %d 项和是：%d\n", n, sum);
//	return 0;
//}



// 递归和非递归分别实现求n的阶乘（不考虑溢出的问题）

// 递归方法
//int factor(int num)
//{
//	if (num == 1)
//	{
//		return 1;
//	}
//	return num * factor(num - 1);
//}
//
//int main()
//{
//	int num = 5;
//	int ret = factor(num);
//	printf("%d\n", ret);
//	return 0;
//}


// 非递归的方法：迭代
//int Fact(int num)
//{
//	int ret = 1;
//	for (int i = 1; i <= num; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	printf("请输入一个数字：");
//	scanf("%d", &n);
//	int ret = Fact(n);
//	printf("%d\n",ret);
//	return 0;
//}


// 递归法：求第n个斐波那契数
//int fib(int n)
//{
//	if (n <= 1) return n;
//	return fib(n - 1) + fib(n - 2);
//}


// 非递归求第n个斐波那契数
// 迭代方式
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	int next = 0;
//	//第三项开始推算
//	for (int i = 3; i <= n; i++)
//	{
//		next = a + b;
//		a = b;
//		b = next;
//	}
//	return b;
//}
//int main()
//{
//	int num = 0;
//	printf("请输入一个数字：");
//	scanf("%d", &num);
//	int ret = fib(num);
//	printf("第%d个斐波那契数是：%d\n",num,ret);
//	return 0;
//}


// 递归实现n的k次方
//int fact(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else if (k > 0)
//	{
//		return n * fact(n, k - 1);
//	}
//	else
//	{
//		return 1.0 / fact(n, -k);
//	}
//}
//
//int main()
//{
//	int ret = fact(2,5);  // 2的5次方是32
//	printf("%d\n", ret);
//	return 0;
//}


//int DigitSum(int n)
//{
//	int sum = 0;
//
//	if (n < 10)
//	{
//		return n;
//	}
//	else 
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//	return sum;
//}
//
//int main()
//{
//	int num = 0;
//	printf("请输入一个非负整数："); // 输入1729 = 1+7+2+9 = 19
//	scanf("%d", &num);
//	int result = DigitSum(num);
//	printf("%d\n", result);
//	return 0;
//}


//int func(int num)
//{
//	if (num > 9)
//	{
//		func(num / 10);
//	}
//	printf("%d\n", num % 10);
//}
//// 递归方式实现打印一个整数的每一位
//int main()
//{
//	int num = 1729;
//	func(num);
//
//	return 0;
//}


//int i = 0;
//int main()
//{
//	i--;
//	if (i > sizeof(i))
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}



//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	printf("单身数是：%d\n", ret);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后的数字：\n");
//	printf("a = %d, b = %d\n", a, b);
//	return 0;
//}


//int main()
//{
//	int a = 5;
//	printf("%p\n", &a);
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[0];
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}


//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3; // 6 + 3 + 3 = 12
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
//	return 0;
//}


//int main()
//{
//	char arr[] = "abcdedg";
//	size_t len = strlen(arr);
//	printf("%zu\n", len);  // 7
//	return 0;
//}


//size_t my_strlen(char* s)
//{
//	char* p = s;
//	while (*p != '\0')
//		p++;
//	return p - s;
//}
//int main()
//{
//	char arr[] = "abcdedg";
//	size_t len = my_strlen(arr);
//	printf("%zu\n", len);  // 7
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	while (p < &arr[10])
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	while (p <= &arr[sz - 1])
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}


//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	//int* p = arr 
//	//int* p = arr[0];
//	//int* p = &arr;
//	//int* p = &arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr;
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//	}
//	return 0;
//}


// const修饰指针变量

//// const放在左边
//int main()
//{
//	const int n = 10;
//	const int* p = &n;
//	//*p = 20;  // 是不可以修改指针变量所指向的内容
//	const int m = 30;
//	p = &m;  // 但是可以修改指针变量的指向
//	return 0;
//}

//// const放在右边
//int main()
//{
//	const int n = 20;
//	int* const p = &n;
//	*p = 30;  // 是可以修改指针变量指向的内容的
//	const int m = 40;
//	// p = &m;  // 但是不能修改指针变量的指向了
//	return 0;
//}


//// const两边都放
//int main()
//{
//	const int n = 20;
//	const int* const p = &n;
//	*p = 30;  // 不可以修改指针变量指向的内容
//	const int m = 40;
//	p = &m;  // 也不能修改指针变量的指向了
//	return 0;
//}



//void Func()
//{
//
//}
//int main()
//{
//	
//	int arr[10] = { 0 };
//	printf("请输入10个数字：\n");
//
//	// 输入
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	// 输出
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


// 用指针来写

//
//void print(int *p, int sz)
//{
//
//	// 输入
//	for (int i = 0; i < sz; i++)
//	{
//		scanf("%d", p + i);
//	}
//
//	// 输出
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//
//// 调整奇数偶数的顺序函数
//void reorder(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		// 从左找偶数
//		while (left < right && (arr[left] & 1) == 1)
//		{
//			left++;
//		}
//
//		// 从右找奇数
//		while (left < right && (arr[right] & 1) == 0)
//		{
//			right--;
//		}
//
//		// 交换
//		if (left < right)
//		{
//			int temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//		}
//	}
//
//	print(arr, sz);
//}
//
//
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	printf("请输入10个数字：\n");
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	reorder(arr, sz);
//
//	return 0;
//}


// 调整奇数偶数的函数
void reorder(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		// 从左找偶数
		while (left < right && (arr[left] & 1) == 1)
		{
			left++;
		}
		// 从右找奇数
		while (left < right && (arr[right] & 1) == 0)
		{
			right--;
		}

		// 交换
		if (left < right)
		{
			int temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
		}
	}
}

// 打印函数
void print(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	reorder(arr, sz);
	print(arr, sz);
	return 0;
}