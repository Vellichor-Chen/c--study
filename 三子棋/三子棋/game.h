#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 3
#define COL 3
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

//声明
void initboard(char board[ROW][COL], int row, int col);
void displayboard(char board[ROW][COL], int row, int col);
void playermove(char board[ROW][COL], int row, int col);
void computermove(char board[ROW][COL], int row, int col);

//告诉4种游戏状态
//玩家赢*
//电脑赢#
//平局Q
//继续Cchar iswin(char board[ROW][COL], int row, int col);

