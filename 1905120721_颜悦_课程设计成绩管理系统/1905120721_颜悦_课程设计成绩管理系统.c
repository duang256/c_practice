#include<stdio.h>             

struct student                      //�ṹ��student ����ѧ�� ���� ���� ��ѧ ���� Ӣ��ɼ�  �Լ���һԪ��ָ��
{
		int num;
		int age;
		char name[20];
		float math;
		float physics;
		float English;
		struct student * next;
}
students[33]={                     //�ɼ��б�
{1,18,"�º���",60,75,71},
{2,18,"������",85,85,76},
{3,18,"��֣��",85,80,73},
{4,18,"��־��",65,67.5,87},
{5,18,"�ʼҺ�",80,52.5,87},
{6,18,"�ο�ΰ",50,37.5,54},
{7,18,"��ȴ�",70,80,75},
{8,18,"��С��",80,77.5,59},
{9,18,"���",50,42.5,62},
{10,18,"�ֺ���",90,82.5,74},
{11,18,"���",80,40,71},
{12,18,"��ɺ",85,42.5,63},
{13,18,"������",85,77.5,83},
{14,18,"�����",90,72.5,75},
{15,18,"����ΰ",0,0,0},
{16,18,"����",100,100,100},
{17,18,"������",65,70,63},
{18,18,"л����",85,77.5,83},
{19,17,"����",100,100,100},
{20,18,"���",80,55,81},
{21,18,"����",75,70,63},
{22,18,"�����",90,57.5,67},
{23,18,"���",85,70,80},
{24,18,"����",85,55,91},
{25,18,"����",70,65,67},
{26,18,"���Ʒ�",65,55,74},
{27,18,"����",85,40,82},
{28,18,"������",75,50,71},
{29,18,"����",75,50,71}};

int main()
{
	char menu();                                      
	void a(struct student *p1);
	void b();
	void c(struct student *p3);
	void d(struct student *p4);
	void e();
	void f(struct student *p6);
	char key;
	int i;

	struct student *head,*p;                //��������
	head=&students[0];
	for(i=0;i<28;i++)
	{students[i].next=&students[i+1];}
	students[i].next=NULL;
	p=head;


	key=menu();   

	for(i=0;key!='r';i++)             //�����ڲ��Ĳ˵�
	{ 
		
	switch(key)
	{
	case 'A':a(p);break;
	case 'B':b();break;
	case 'C':c(p);break;
	case 'D':d(p);break;
	case 'E':e();break;
	case 'F':f(p);break;
	}
	printf("�����Խ�������������������r�˳�\n");
	getchar();
	scanf("%c",&key);
	}

	

}


char menu()                            //����˵����û�ѡ��
{
	char z;
	printf("A.����һ���µ�ѧ����¼\n");
	printf("B.�޸�ѧ����¼\n");
	printf("C.ɾ��һ��ѧ����¼\n");
	printf("D.�Ǽǳɼ�\n");
	printf("E.�޸ĳɼ�\n");
	printf("F.���ȫ��ɼ�\n");
	printf("������ѡ��:");
	scanf("%c",&z);
	return z;
}




void a(struct student *p1)                  //A����
{
	int k,i=1,j=1;
	struct student *pa;
	printf("���������ѧ������һ��ѧ����ѧ��:");
	scanf("%d",&k);
	while(1)
	{
		while(i==k)
		{
			printf("����:");
			scanf("%d",&students[31].age);
			printf("����:");
			scanf("%s",&students[31].name);
			printf("��ѧ:");
			scanf("%f",&students[31].math);
			printf("����:");
			scanf("%f",&students[31].physics);
			printf("Ӣ��:");
			scanf("%f",&students[31].English);
			j--;break;
		}
		i++;
		if(j==0) break;
	}
	for(i=1;p1->next!=NULL;i++,p1=p1->next)
	{
		if(i==k)
		{
			pa=p1->next;
			p1->next=&students[31];
			students[31].next=pa;
		}
	}
}


void b()               //B����
{
	int k;
	printf("ѧ��ѧ��:\n");
	scanf("%d",&k);
	students[k-1].num=k;
	printf("����:");
	scanf("%d",&students[k-1].age);
	printf("\n");
	printf("����:");
	scanf("%s",&students[k-1].name);
	printf("\n");
	printf("��ѧ:");
	scanf("%f",&students[k-1].math);
	printf("\n");
	printf("����:");
	scanf("%f",&students[k-1].physics);
	printf("\n");
	printf("Ӣ��:");
	scanf("%f",&students[k-1].English);

}











void c(struct student *p3)   //C����
{
	int i,k;
	printf("ѧ��ѧ��:");
	scanf("%d",&k);
	for(i=1;p3!=NULL;p3=p3->next,i++)
	{
		if(i==k-1)
		{
			p3->next=p3->next->next;break;
		}

	}
}





void d(struct student *p4)    //D����
{
	char k;
	for(;p4!=NULL;p4=p4->next)
	{
	printf("ѧ��:");
	scanf("%d",&p4->num);
	printf("\n");
	printf("����:");
	scanf("%d",&p4->age);
	printf("\n");
	printf("����:");
	scanf("%s",&p4->name);
	printf("\n");
	printf("��ѧ:");
	scanf("%f",&p4->math);
	printf("\n");
	printf("����:");
	scanf("%f",&p4->physics);
	printf("\n");
	printf("Ӣ��:");
	scanf("%f",&p4->English);
	printf("����س������Ǽǳɼ�,��q�˳�\n");
	getchar();
	scanf("%c",&k);
	if(k=='q')
		break;
	else 
		printf("���������\n");
	}

}


void e()                  //E����
{
	int k,i=0,j=1;
	printf("ѧ��ѧ��:\n");
	scanf("%d",&k);
	
	while(j)
	{
	while(i==k-1)
	{
	printf("����:");
	scanf("%s",&students[i].name);
	printf("\n");
	printf("��ѧ:");
	scanf("%f",&students[i].math);
	printf("\n");
	printf("����:");
	scanf("%f",&students[i].physics);
	printf("\n");
	printf("Ӣ��:");
	scanf("%f",&students[i].English);
	j--;break;
	}
	i++;
	if(j==0)break;
	}


}




void f(struct student *p6)           //F����
{
	float sum;
	int i;
	printf("ѧ��  ����   ����     ��ѧ  ����  Ӣ��  �ܷ�\n");
	for(i=1;p6!=NULL;p6=p6->next,i++)
	{
	sum=p6->math+p6->physics+p6->English;
	printf("%-7d%-5d%-10s%-6.1f%-6.1f%-6.1f%-6.1f\n",i,p6->age,p6->name,p6->math,p6->physics,p6->English,sum);
	}
}
