#include<stdio.h>
#include<stdlib.h>
void English()
{
	system("CLS");
	int a,i,op,count;
	int x,y,m,n,b,d,z,result,tem;
	printf("please input the number of topics to generate:\n");
	scanf("%d",&a); //生成题目数
	for(i=0;i<a;i++)
	{
		x=rand()%100;//随机生成数
		y=rand()%100;
		while(1)     //m（分子）不为0
		{
			m=rand()%100;
			if(m!=0)
				break;
		}
		while(1)     //n（分子）不为0
		{
			n=rand()%100;
			if(n!=0)
				break;
		}
		op=rand()%8;    //随机生成符号(整数运算与分数运算)
		switch(op)
		{
		case 0:        //整数加法运算     
			printf("%d+%d=",x,y);
			result=x+y;
			break;
		case 1:       //整数减法运算
			if(x<y)   //不能为负数
			{
				tem=x;
				x=y;
				y=tem;
			}
			printf("%d-%d=",x,y);
			result=x-y;
			break;
		case 2:     //整数乘法运算
			printf("%d*%d=",x,y);
			result=x*y;
			break;
		case 3:     //整数除法运算
			printf("%d/%d=",x,m);
			result=x/m;
			break;
		case 4:     //分数加法运算
			b=x*n+y*m;
			d=m*n;
			printf("%d/%d+%d/%d=",x,m,y,n);
			result=b/d;
			break;
		case 5:     //分数减法运算
			b=x*n-y*m;
			d=m*n;
			printf("%d/%d-%d/%d=",x,m,y,n);
			result=b/d;
			break;
		case 6:    //分数乘法运算
			b=x*y;
			d=m*n;
			printf("(%d/%d)*(%d/%d)=",x,m,y,n);
			result=b/d;
			break;
		case 7:    //分数除法运算
			b=x*n;
			d=m*y;
			printf("(%d/%d)/(%d/%d)=",x,m,y,n);
			result=b/d;
			break;
		}
		scanf("%f",&z);
		if(z==result){                //判断正误
			printf("true\n");
			count++;
		}
		else
			printf("false\n");
	}
	printf("The total number of items are:%d,one point for each question，the total score is:%d\n",a,count);
}
