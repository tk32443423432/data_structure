#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define EASY_COUNT 10

// 这个ROW 和 COL 就是mine数组
#define ROW 9
#define COL 9

// 这个ROWS 和 COLS 就是show数组
#define ROWS ROW + 2
#define COLS COL + 2



// 棋盘初始化函数
void InitBoard(char board[ROWS][COLS], int rows,int cols, char set);


// 展示棋盘的函数
void DisplayBoard(char board[ROWS][COLS], int row, int col);

// 设置雷的函数
void SetMine(char board[ROWS][COLS], int row, int col);

// 排查雷的函数
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);