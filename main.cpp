#include<stdio.h>
#include<stdlib.h>
int display();
#include"Chinese.h"
#include"English.h"
#include"Japanese.h"
void main()
{
	system("cls"); 
	int key;
	for(;;)
	{
		key=display();
		switch(key)
		{
		case 1:
			Chinese();
			break;
		case 2:
			English();
			break;
		case 3:
			Japanese();
			break;
		case 0:
			printf("\n谢谢使用/Thanks for using/ありがとうございます\n");
			exit(0);
		default:
			break;
		}
		system("pause");
	}
}
static int display()
{ 
	int key;
	system("CLS");
	printf("**      1:中文              **\n");
	printf("**      2:English           **\n");
	printf("**      3:日本語の          **\n");
	printf("**      0:退出系统/log dow/退出システム      **\n");
	printf("请输入/input/入力して下さい：");
	scanf("%d",&key);
	while(key!=0&&key!=1&&key!=2&&key!=3)
	{
		printf("请输入正确的数字/please inter the right number/正しい数字を入力してください!\n");
		scanf("%d",&key);
	}
	return key;
}