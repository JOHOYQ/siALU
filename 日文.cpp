#include<stdio.h>
#include<stdlib.h>
void Japanese()
{
	system("CLS");
	int a,i,op,count;
	int x,y,m,n,b,d,z,result,tem;
	printf("���ɤ��}Ŀ�������������¤���:\n");
	scanf("%d",&a); //������Ŀ��
	for(i=0;i<a;i++)
	{
		x=rand()%100;//���������
		y=rand()%100;
		while(1)     //m�����ӣ���Ϊ0
		{
			m=rand()%100;
			if(m!=0)
				break;
		}
		while(1)     //n�����ӣ���Ϊ0
		{
			n=rand()%100;
			if(n!=0)
				break;
		}
		op=rand()%8;    //������ɷ���(�����������������)
		switch(op)
		{
		case 0:        //�����ӷ�����     
			printf("%d+%d=",x,y);
			result=x+y;
			break;
		case 1:       //������������
			if(x<y)   //����Ϊ����
			{
				tem=x;
				x=y;
				y=tem;
			}
			printf("%d-%d=",x,y);
			result=x-y;
			break;
		case 2:     //�����˷�����
			printf("%d*%d=",x,y);
			result=x*y;
			break;
		case 3:     //������������
			printf("%d/%d=",x,m);
			result=x/m;
			break;
		case 4:     //�����ӷ�����
			b=x*n+y*m;
			d=m*n;
			printf("%d/%d+%d/%d=",x,m,y,n);
			result=b/d;
			break;
		case 5:     //������������
			b=x*n-y*m;
			d=m*n;
			printf("%d/%d-%d/%d=",x,m,y,n);
			result=b/d;
			break;
		case 6:    //�����˷�����
			b=x*y;
			d=m*n;
			printf("(%d/%d)*(%d/%d)=",x,m,y,n);
			result=b/d;
			break;
		case 7:    //������������
			b=x*n;
			d=m*y;
			printf("(%d/%d)/(%d/%d)=",x,m,y,n);
			result=b/d;
			break;
		}
		scanf("%f",&z);
		if(z==result){          //�ж�����
			printf("������\n");
			count++;
		}
		else
			printf("�`��\n");
	}
	printf("�t�}Ŀ��%d,���Ȥ�1�֤��Ĥ��룬�t�õ�%d\n",a,count);
}