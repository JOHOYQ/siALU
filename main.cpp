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
			printf("\n仍仍聞喘/Thanks for using/ありがとうございます\n");
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
	printf("**      1:嶄猟              **\n");
	printf("**      2:English           **\n");
	printf("**      3:晩云�Zの          **\n");
	printf("**      0:曜竃狼由/log dow/曜竃システム      **\n");
	printf("萩補秘/input/秘薦して和さい��");
	scanf("%d",&key);
	while(key!=0&&key!=1&&key!=2&&key!=3)
	{
		printf("萩補秘屎鳩議方忖/please inter the right number/屎しい方忖を秘薦してください!\n");
		scanf("%d",&key);
	}
	return key;
}