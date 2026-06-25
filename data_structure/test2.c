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
//void reorder(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		// 从左找偶数
//		while (left < right && (arr[left] & 1) == 1)
//		{
//			left++;
//		}
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
//}

// 打印函数
//void print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reorder(arr, sz);
//	print(arr, sz);
//	return 0;
//}


//int main()
//{
//	int* p = NULL;
//	int arr[10] = { 0 };
//	//p = arr;
//	//int (*ptr)[10] = &arr;
//	//p = &arr[0];
//	//p = &arr;
//	p = arr;
//	return 0;
//}


//void print(int *p , int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (p < &arr[5])
//	{
//		printf("%d ", *p);
//		p++;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int* p = arr;
//	print(p, arr);
//	return 0;
//}



// 实现一个对整形数组的冒泡排序
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)  // 控制循环的轮数
//	{ 
//		for (j = 0; j < sz - 1 - i; j++)   // 控制每轮比较的次数
//		{
//			// 开始交换数字的位置
//			if (arr[j] > arr[j + 1])  // 交换的是j，跟i没关系
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//void print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 3,1,5,2,8,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	print(arr, sz);
//	return 0;
//}


// 反向函数
//void reverse(char * left, char * right)
//{
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//
//		left++;
//		right--;
//	}
//}
//
//// 字符串左旋的函数
//void left_rotate(char* str, int k)
//{
//	int len = strlen(str);
//
//	k %= len;
//
//	reverse(str, str + k - 1);
//	reverse(str + k, str + len - 1);
//	reverse(str, str + len - 1);
//}
//int main()
//{
//	char str[] = "ABCDEFG";
//	left_rotate(str, 2);
//	printf("%s\n", str); // 输出：CDEFGAB
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	printf("arr = %p\n", arr);
//	printf("arr + 1 = %p\n", arr + 1);
//
//	printf("&arr = %p\n", &arr);
//	printf("&arr + 1 = %p\n", &arr + 1);
//
//	return 0;
//}

// 指针指向的空间释放
//int* test()
//{
//	int n = 100;
//	return &n; // 这里已经return 返回了，释放掉了资源
//}
//int main()
//{
//	int* p = test();
//	printf("hehe\n");  // 只要我
//	printf("%d\n", *p);  // 再次访问时，就会出现随机地址，访问的就不是原来的地址了
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	//int* p = &a;  // true
//	int* p = NULL; // false
//	assert(p != NULL);  
//	return 0;
//}


// 计数器
// 计算字符长度的函数
//size_t my_strlen(char* p)
//{
//	size_t count = 0;
//	//assert(*p != NULL);  // 断言一下，预防指针为NULL
//
//	while (*p != 0)
//	{
//		count++;  // 长度++
//		p++;  // 
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = my_strlen(arr);
//	printf("%zu\n", len);
//	return 0;
//}


// 交换两个变量的值，使用函数来进行交换
//void Swap(int *p1, int *p2)
//{
//	int temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：\n");
//	printf("a = %d , b = %d\n", a, b);
//	Swap(&a, &b);
//	printf("交换后：\n");
//	printf("a = %d , b = %d\n", a, b);
//
//	return 0;
//}


//size_t my_strlen(const char *p)
//{
//	int count = 0;
//	while (*p != 0)
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//int main()
//{
//	char ch[] = "abcdef";
//	size_t len = my_strlen(ch);
//	printf("%zu\n", len);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("&arr[0] = %p\n", &arr[0]);  // 数组首元素的地址
//	printf("arr = %p\n", arr);  // 数组名
//	printf("&arr = %p\n", &arr);  // 取地址arr，表示的是整个数组的地址，但是打印出来的地址，也是首元素开始
//
//	printf("------------------------\n");
//
//	printf("&arr[0] + 1 = %p\n", &arr[0] + 1);  // 数组首元素的地址
//	printf("arr + 1 = %p\n", arr + 1);  // 数组名
//	printf("&arr + 1 = %p\n", &arr + 1);
//
//	return 0;
//}	



//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		*p = i + 1;
//		p++;
//	}
//	p = arr;  // 让指针回来，不然就是野指针
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}



//void Func(int *arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Func(arr, sz);
//	return 0;
//}




// 打印函数
//void print(int *p, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//
//// 排序函数
//void bubble_sort(int arr[], int sz)
//{
//	// 比较趟数
//	for (int i = 0; i < sz - 1; i++)
//	{
//		// 比较的对数（有多少对数字要比较）
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			// 开始比较
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 4,6,1,7,0,3,2 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	print(arr, sz);
//	return 0;
//}


//void print(int* p, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//
//// 排序函数: 写成指针的形式
//void bubble_sort(int *arr, int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		// 如果数组已经有序了
//		int flag = 1;
//
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (*(arr + j) > *(arr + j + 1))
//			{
//				// flag = 0 说明数组暂时还是无序的
//				flag = 0;
//				int temp = *(arr + j);
//				*(arr + j) = *(arr + j + 1);
//				*(arr + j + 1) = temp;
//			}
//		}
//		if (flag == 1)  // 如果经过一轮排序后，数组是有序的
//		{
//			break;  // 直接就跳出循环，不继续排序了
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 4,6,1,7,0,3,2 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	print(arr, sz);
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int* pa = &a;  // 一级指针
//	int** ppa = &pa;  // 二级指针
//	printf("%d\n", a);
//	printf("%d\n", *pa);
//	printf("%d\n", **ppa);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* parr[] = { &a, &b, &c, &d };
//
//	//printf("%d\n", *parr[0]);
//	//printf("%d\n", *parr[1]);
//	//printf("%d\n", *parr[2]);
//
//	int sz = sizeof(parr) / sizeof(parr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(parr[i]));
//	}
//
//	return 0;
//}


//int main()
//{
//	// 用指针数组模拟二维数组
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



// 字符指针
//int main()
//{
//	//char arr[] = "123456"; // 这个就是一个普通的字符数组, 是可以修改其内容的
//	//char* p = arr;  // 通过指针进行指向数组的地址
//	const char* p = "abcdef"; // 这只是一个字符串，不可修改，且是把第一个字符的地址赋值给了 p
//	// 用const修饰字符指针，因为它本身就不可变，所以加上const进行修饰
//	printf("%s\n", p); // 用p就可以打印这个常量字符串
//	return 0;
//}


// 数组指针
//int main()
//{
//	//char* p1 = "abcdef";  // 字符指针
//	//int* p2 = 123;  // 整型指针
//
//	int arr[5] = { 1,2,3,4,5 };
//	int (*p)[10] = &arr;  // 这就是一个数组指针 ，p就是数组指针变量
//
//	char ch[5] = "abc";
//	char (*p2)[5] = &ch;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;  // 数组指针
//	// 遍历打印出来
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int*p = arr;  // 数组指针
//	// 遍历打印出来
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//
//	return 0;
//}


// 二维数组的打印
//void func(int (*p)[5], int row, int col)
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			printf("%d ", *(*(p + i) + j));  // *(*(p + i)+j)
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	func(arr,3,5);
//	return 0;
//}



// 函数指针变量
//int Add(int x,int y)
//{
//	return x + y;
//}

//int main()
//{
//	printf("%p\n", Add);  // 函数名即函数的地址
//	printf("%p\n", &Add); // 取地址也是一样的
//
//	// 怎么写成函数指针变量的形式呢？可以类比一下数组指针
//	//	int (*p)[10] = &arr;  // 这就是一个数组指针 ，p就是数组指针变量
//	int (*pf)(int, int) = &Add;
//	return 0;
//}


//char* test(char* ch, int num)
//{
//
//}
//int main()
//{
//	char* (*pt)(char *, int) = &test;  // 形参和返回值类型必须和函数的一样
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int (*pf)(int, int) = Add;
//	//int ret = Add(5, 6);  两种写法都可以
//	int ret = pf(4, 5);
//	printf("%d\n", ret);
//	return 0;
//}


//typedef unsigned int uint;  // 这样就实现了类型重命名
//typedef int* pint;
//int main()
//{
//	unsigned int num1;
//	uint num2; // 简化了类型名字的长度
//
//	// 想连续定义两个指针变量
//	int* p3, * p4;  // 只有这样写才可以。
//	pint p1, p2; // 不过我们使用typedef的话，就可以定义两个int*的指针变量
//
//	return 0;
//}


//typedef void(*pf_t)(int);  // 这是一个函数指针, 重命名为pf_t
//
//// 函数声明也就简化了
//pf_t signal(int, pf_t);
//
//// 数组指针也是一样
//int(*p)[5];
//// 使用typedef也是一样简化，重命名的名字必须要放在*右边
//typedef int(*parr_t)[5];

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	// 函数指针
//	int (*pf1)(int, int) = Add;
//	int (*pf1)(int, int) = Sub;
//	// 希望使用一个数组来存放函数指针，这个时候就需要函数指针数组
//	int(*pArr[4])(int,int) = {Add,Sub};  // pArr就是函数指针
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)  // 乘
//{
//	return x * y;
//}
//int Div(int x, int y)  // 除
//{
//	return x / y;
//}
//
//// 菜单函数
//void menu()
//{
//	printf("*********** 计算器 **********\n");
//	printf("*** 1. + 加法   2. - 减法 ***\n");
//	printf("*** 3. * 乘法   4. / 除法 ***\n");
//	printf("******* 0：退出计算器 *******\n");
//}
// 主函数逻辑
//int main()
//{
//	int input = 0;
//	int x = 0, y = 0 ,r = 0;
//	do
//	{
//		menu();
//		printf("请输入你的选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数：");
//			scanf("%d %d",&x,&y);
//			r = Add(x, y);
//			printf("结果为：%d\n", r);
//			break;
//		case 2:
//			printf("请输入两个操作数：");
//			scanf("%d %d", &x, &y);
//			r = Sub(x, y);
//			printf("结果为：%d\n", r);
//			break;
//		case 3:
//			printf("请输入两个操作数：");
//			scanf("%d %d", &x, &y);
//			r = Mul(x, y);
//			printf("结果为：%d\n", r);
//			break;
//		case 4:
//			printf("请输入两个操作数：");
//			scanf("%d %d", &x, &y);
//			r = Div(x, y);
//			printf("结果为：%d\n", r);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default :
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (input);
//}


//int main()
//{
//	int input = 0;
//	int x = 0, y = 0, ret = 0;
//	// 创建一个函数指针数组作为转移表
//	int(*p[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("请输入你的选择：");
//		scanf("%d", &input);
//		if (input <= 4 && input >= 1)
//		{
//			printf("请输入两个操作数：");
//			scanf("%d %d", &x, &y);
//			ret = p[input](x, y);  // 调用对应的函数
//			printf("运算结果是：%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出计算器\n");
//			break;
//		}
//		else
//		{
//			printf("输入错误，请重新输入！\n");
//		}
//	} while (input);
//	return 0;
//}



//int main()
//{
//	char arr[4] = "ABCD";
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%c ", arr[i]);
//		int murderer = 0;  // 凶手
//		if (arr[i] != murderer && arr[i] != murderer && arr[i] == murderer && arr[i] == murderer)
//		{
//			printf("%c ", arr[i]);
//		}
//	}
//	return 0;
//}


//int main()
//{
//    // 二维数组
//    int arr[10][10] = { 0 };
//
//    // 1. 两边置为1
//    for (int i = 0; i < 10; i++)
//    {
//        arr[i][0] = 1;
//        arr[i][i] = 1;
//    }
//
//    // 2. 计算中间元素
//    for (int i = 2; i < 10; i++)
//    {
//        for (int j = 1; j < i; j++)
//        {
//            arr[i][j] =
//                arr[i - 1][j - 1]
//                + arr[i - 1][j];
//        }
//    }
//
//    // 打印
//    for (int i = 0; i < 10; i++)
//    {
//        for (int j = 0; j <= i; j++)
//        {
//            printf("%4d", arr[i][j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

//int main()
//{
//	int arr[10][10] = { 0 };
//
//	// 1. 两边都置为1
//	// 假设打印前 6 行, 但是给出10做冗余
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i][0] = 1;
//		arr[i][i] = 1;
//	}
//
//	// 2. 计算中间的值
//	for (int i = 2; i < 10; i++)
//	{
//		for (int j = 1; j < i; j++)
//		{
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//
//	// 打印
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			printf("%4d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}



//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		int count = 0;
//		for (int j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//
//		if (count == 1)
//		{
//			printf("只出现过一次的数字是：%d\n", arr[i]);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = 0;
//
//	for (int i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	printf("只出现过一次的数字是：%d\n", ret);
//	return 0;
//}


//int main()
//{
//    int year = 0;
//    int month = 0;
//
//    printf("请输入年份和月份：");
//    scanf("%d %d", &year, &month);
//
//    int days = 0;
//
//    if (month == 2)
//    {
//        // 判断闰年
//        if ((year % 4 == 0 && year % 100 != 0)
//            || (year % 400 == 0))
//        {
//            days = 29;
//        }
//        else
//        {
//            days = 28;
//        }
//    }
//    else if (month == 1 || month == 3 || month == 5 ||
//        month == 7 || month == 8 || month == 10 ||
//        month == 12)
//    {
//        days = 31;
//    }
//    else if (month == 4 || month == 6 ||
//        month == 9 || month == 11)
//    {
//        days = 30;
//    }
//    else
//    {
//        printf("月份输入错误！\n");
//        return 1;
//    }
//
//    printf("%d年%d月有%d天\n", year, month, days);
//
//    return 0;
//}



//int main()
//{
//	char(*arr)[10] = 'd';
//	return 0;
//}



//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)  // 乘
//{
//	return x * y;
//}
//int Div(int x, int y)  // 除
//{
//	return x / y;
//}
//
//// 菜单函数
//void menu()
//{
//	printf("*********** 计算器 **********\n");
//	printf("*** 1. + 加法   2. - 减法 ***\n");
//	printf("*** 3. * 乘法   4. / 除法 ***\n");
//	printf("******* 0：退出计算器 *******\n");
//}
//
//void calc(int (*pf)(int ,int))
//{
//	int x = 0, y = 0, r = 0;
//	printf("请输入两个操作数：");
//	scanf("%d %d", &x, &y);
//	r = pf(x, y);
//	printf("结果为：%d\n", r);
//
//}
//// 主函数逻辑
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请输入你的选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (input);
//}


//void qsort(
//	void* base, 
//	size_t num, 
//	size_t size,
//	int (*compar)(const void*, const void*));



// 排序整型数据，就需要先实现一个比较函数
// qsort函数的使用者需要先实现一个比较函数
//int int_cmp(const void* p1, const void* p2)
//{
//	return (*(int*)p1 - *(int*)p2);
//}
//
//int main()
//{
//	int arr[] = { 1,3,5,7,9,2,4,6,8,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(int), int_cmp);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//};
// 测试qsort函数排序结构体的数据
// 先按照名字来比较大小
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp((*(struct Stu*)e1).name, (*(struct Stu*)e2).name);
//}
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name , ((struct Stu*)e2)->name);
//}                            // 这种不要*解引用的，可以使用-> 箭头来表示
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e1)->age;
//}
//void test2()
//{
//	struct Stu arr[] = { {"张三",21} ,{"李四",22}, {"王五",23} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
//	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
//}
//int main()
//{
//	test2();
//	return 0;
//}



//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	struct Stu s = { "张三",21 };
//	//printf("%s %d\n", s.name,s.age);  写法一：访问结构体
//	struct Stu* ps = &s;  // 写法二：使用指针进行访问结构体
//	printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);
//
//	printf("%s\n", ps->name);  // 写法三：使用箭头代替*星号
//	return 0;
//}





//int main()
//{
//    int arr[] = { 5, 3, 8, 6, 2 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//
//    qsort(arr, sz, sizeof(arr[0], );
//
//    for (int i = 0; i < sz; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//
//    return 0;
//}


//#define MAXSIZE 20  /* 存储空间初始分配量 */
//typedef int ElemType;  /* ElemType类型根据实际情况而定，这里为int */
//typedef struct
//{
//	ElemType data[MAXSIZE]; /* 数组存储数组元素 */
//	int length;
//}SeqList;

//void Swap(char* buf1, char* buf2, int width)
//{
//	for (int i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//// 提供一个函数，这个函数能够比较2个整型数据的大小
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//// 打印函数
//void print_arr(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//// 排序函数：默认排成升序
//void bubble_sort(void* base,int sz, int width, 
//				int (*cmp)(const void* e1, const void* e2))
//{
//	// 趟数
//	for (int i = 0; i < sz - 1; i++)
//	{
//		// 假设数组已经排好序了，就使用flag = 1
//		int flag = 1;
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			// 借助cmp指针指向的函数来比较arr[j], arr[j + 1]的大小
//			// 传递给cmp函数的是arr[j], arr[j + 1]的地址
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//// 模仿qsort的功能实现一个通用的冒泡排序
//void test2()
//{
//	int arr[] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr,sz);
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//// 按照姓名进行比较
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//// 按照年龄进行比较
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->age, ((struct Stu*)e2)->age);
//}
//
//void test3()
//{
//	struct Stu arr[] = { {"张三",20} ,{"李四",21} ,{"王五",22} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
//}
//int main()
//{
//	//test2();
//	test3();
//	return 0;
//}


//int main()
//{
//	char arr1[3] = { 'a','b','c'};
//	char arr2[] = "abc";
//	printf("%d\n", strlen(arr1));  // 35
//	printf("%d\n", strlen(arr2));  // 3
//
//	printf("----------------------\n");
//
//	printf("%zd\n", sizeof(arr1));  // 3 这个没有
//	printf("%zd\n", sizeof(arr2)); // 4 有隐藏的\0
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4 };  // 4个元素，一个元素4个字节大小
//	printf("%zd\n", sizeof(arr));  // 16 = 4 * 4
//
//
//	printf("%zd\n", sizeof(&arr));
//	return 0;
//}


//void print_arr(int (*arr)[5], int row, int col);
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	print_arr(arr, 3, 5);
//
//	return 0;
//}


//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}



//int main()
//{
//	//char arr[] = "abc";
//
//	//printf("%d\n", sizeof(arr));  // 'a' 'b' 'c' '\0'  4
//	//printf("%d\n", strlen(arr));  // 只算有效字符  3
//
//
//	char* p = "abc";
//
//	printf("%d\n", sizeof(p));  // 8   指针大小
//	printf("%d\n", strlen(p));  // 3   字符串长度
//
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(a));  // 4: 是int类型的字节大小，在32/64位环境下
//	printf("%d\n", sizeof(int));  // 是一样的
//
//	return 0;
//}



//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));  // 4 * 4 = 16 计算的是整个数组的大小
//	printf("%d\n", sizeof(a + 0));  // a是数组首元素的地址，a + 0不变，还是数组首元素的地址，
//			// 计算的是地址的大小，但是我这里是x64的环境，所以输出的是：8
//	printf("%d\n", sizeof(*a));  // a是数组首元素的地址, *a是首元素，计算的是首元素的字节大小，4
//	printf("%d\n", sizeof(a + 1));  // a是数组首元素的地址, a + 1跳到第二个元素，计算第二个元素的字节大小：4/8(32位/64位)
//	printf("%d\n", sizeof(a[1]));  // 计算的就是数组下标为1的元素的地址：4个字节
//	
//	printf("%d\n", sizeof(&a));  // &a ，取出的是数组的地址，地址要看x32/x64: 4/8
//	printf("%d\n", sizeof(*&a));  // &a: 取出的是整个数组的地址，就是：int (*a)[4]
//						// int (*a)[4]对它就行解引用，int (*)[4] = 16
//						// *&a 这里的解引用访问到16个字节大小
//	printf("%d\n", sizeof(&a + 1));  // &a + 1：跳过整个数组，指向了4后面的数组，
//					// 其实也是指向了4后面的地址，只要是单一的地址，就只能是：4/8(32位/64位)
//	printf("%d\n", sizeof(a[0]));  // 4: 因为这是计算下标为0的元素的字节大小：4个字节
//	printf("%d\n", sizeof(&a[0]));  // 4/8：因为a[0]首元素的地址，对地址进行解引用，所以就是4/8
//	printf("%d\n", sizeof(&a[0] + 1));  // 4 / 8：因为a[0]首元素的地址，a[0] + 1 跳到了下标为1的元素的地址，
//						// 再对地址进行解引用，所以就是4 / 8
//
//	// 可以这么说如果是：a[0] 这种单独数组的元素下标，就是看数组的数据类型是什么，int 就是4个字节，在32位环境下是4个字节大小，
//	// 在64位环境下是4/8个字节大小，都是对数组中单独一个元素的字节大小进行计算的。
//
//	// 如果对数组进行取地址 &a, 那么也是看32位/64位，也就是4/8个字节大小
//	// 如果对数组进行解引用 *a 或者 *&a， 那就要具体情况，具体分析。
//	return 0;			
//}



// 字符数组的sizeof()理解
int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr));  // arr是单独放在sizeof()当中的，计算的就是整个数组的大小，数组有6个元素，输出就是6
	printf("%d\n", sizeof(arr + 0));  // arr是数组名，是数组名就是数组的首元素的地址，是地址就是4/8个字节大小
	printf("%d\n", sizeof(*arr));  // arr是是数组的首元素的地址，*arr：对数组名进行解引用，*arr就是首元素，大小是1个字节
					// char是基本数据类型，和int一样，但是char在32位/64位环境下是1个byte（字节）
					// int 是4个比特位,也就是4个字节。

	printf("%d\n", sizeof(arr[1]));  // 下标为1的元素的字节大小，就是char类型的字节大小，1个字节
	
	printf("%d\n", sizeof(&arr)); // 对arr数组名进行取地址，是地址就是4/8
	printf("%d\n", sizeof(&arr + 1)); // &arr + 1即跳过了整个数组，指向了数组元素的后面的地址，是地址也是



	return 0;
}