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
			printf("\nллʹ��/Thanks for using/���꤬�Ȥ��������ޤ�\n");
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
	printf("**      1:����              **\n");
	printf("**      2:English           **\n");
	printf("**      3:�ձ��Z��          **\n");
	printf("**      0:�˳�ϵͳ/log dow/�˳������ƥ�      **\n");
	printf("������/input/���������¤�����");
	scanf("%d",&key);
	while(key!=0&&key!=1&&key!=2&&key!=3)
	{
		printf("��������ȷ������/please inter the right number/���������֤��������Ƥ�������!\n");
		scanf("%d",&key);
	}
	return key;
}