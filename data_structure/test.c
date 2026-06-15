//#define _CRT_SECURE_NO_WARNINGS 1
//#include "game.h"
//
//// 测试文件
//
//// 菜单函数
//void menu()
//{
//	printf("******************************\n");
//	printf("******** 1. 开始游戏 *********\n");
//	printf("******** 0. 退出游戏 *********\n");
//	printf("******************************\n");
//	printf("输入1 开始游戏，输入0 退出游戏\n");
//}
//
//
//void game_start()
//{
//	char mine[ROWS][COLS];  // 开发者数组，布置类的数组
//	char show[ROWS][COLS];  // 玩家数组，用来排查雷的数组
//
//	// 1. 初始化棋盘的函数
//	InitBoard(mine, ROWS, COLS, '0');
//	InitBoard(show, ROWS, COLS, '*');
//
//	// 2. 打印棋盘
//	DisplayBoard(show, ROW, COL);
//
//	// 3. 设置雷的函数
//	SetMine(mine, ROW, COL);
//	// DisplayBoard(mine, ROW, COL);
//
//	// 4. 排查雷的函数
//	FindMine(mine, show, ROW, COL);
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请输入你的选择: ");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("开始游戏!\n");
//			game_start();
//			break;
//		case 0:
//			printf("退出游戏!");
//			break;
//		default:
//			printf("输入有误，请重新输入！");
//
//		}
//	} while (input);
//	return 0;
//}
//
