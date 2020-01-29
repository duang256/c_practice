#include<stdio.h>
#include<stdlib.h>



struct Student
{
	int num;
	int age;
	char name[20];
	float English;
	float physics;
	float math;
	struct Student * next;
};



int main()
{
	char menu();
	void insert(struct Student *head);
	void change(struct Student *head);
	void cancel(struct Student *head);
	void regist(struct Student *head);
	void glance(struct Student *head);
	void savedata(struct Student *head);



	FILE *fp;
	char res[256];
	char key=0,z;
	struct Student *current=NULL;
	struct Student *head=NULL;
	struct Student *last=NULL;

	if((fp=fopen("D://data.txt","r"))==NULL)
	{
		printf("cannot open the file!\n");
		exit(0);
	}
	while(fgets(res,256,fp)!=NULL)
	{
		current=(struct Student *)malloc(sizeof(struct Student));
		sscanf(res,"%d %d %s %f %f %f",&(current->num),&(current->age),&(current->name),&(current->English),&(current->physics),&(current->math));
		if(head==NULL)
			head=current;
		else
		{
			last->next=current;
		}
		last=current;
	}

	fclose(fp);

	z=menu();
	while(z!='p')
	{
		if(z>='A'&&z<='E')
		{
			key=z;
			switch(key)
				{
				case 'A':insert(head);break;
				case 'B':change(head);break;
				case 'C':cancel(head);break;
				case 'D':regist(head);break;
				case 'E':glance(head);break;
				}
		}

	key=menu();
	printf("����p�����˳�����,�����������������\n");
	scanf("%c",&z);
	

	}
}



char menu()                           
{
	char z;

	printf("A.����һ���µ�ѧ����¼\n");
	printf("B.�޸�ѧ����¼\n");
	printf("C.ɾ��һ��ѧ����¼\n");
	printf("D.�Ǽǳɼ�\n");
	printf("E.���ȫ��ɼ�\n");
	printf("������ѡ��:");
	scanf("%c",&z);
	return z;

}


void insert(struct Student *head)
{
	int k;
	struct Student *p=head;
	struct Student *p1=NULL;
	printf("����������һ��ѧ��ѧ��:\n");
	scanf("%d",k);
	p1=(struct Student *)malloc(sizeof(struct Student));
	printf("ѧ��:");
	scanf("%d",&p1->num);
	printf("����:");
	scanf("%d",&p1->age);
	printf("����:");
	scanf("%s",&p1->name);
	printf("��ѧ:");
	scanf("%f",&p1->math);
	printf("����:");
	scanf("%f",&p1->physics);
	printf("Ӣ��:");
	scanf("%f",&p1->English);
	for(;p->next!=NULL;p=p->next)
	{
		if(p->num==k)
		{
			p->next=p1;
			p1=p1->next->next;
		}
	}
	savedata(head);
}

void change(struct Student *head)
{
	int k;
	struct Student *p=head;

	printf("������ѧ��ѧ��:\n");
	scanf("%d",&k);
	for(;p->next!=NULL;p=p->next)
	{
		if(p->num==k)
		{
			printf("������ѧ�ɼ�:\n");
			scanf("%f",&(p->math));
			printf("����Ӣ��ɼ�:\n");
			scanf("%f",&(p->English));
			printf("��������ɼ�:\n");
			scanf("%f",&(p->physics));
			break;
		}
	}
	savedata(head);
}


void cancel(struct Student * head)
{
	 int k;
	 struct Student *p=head;
	 
	 printf("������ɾ��ѧ����ѧ��:\n");
	 scanf("%d",&k);

	 for(;p->next!=NULL;p=p->next)
	 {
		 if(p->num==k-1)
		 {
			  p->next=p->next->next;break;
		 }
		 
	 }
	 free(p);
	 savedata(head);
}


void regist(struct Student *head)
{

	int k;
	struct Student *p=head;

	for(;p->next!=NULL;p=p->next)
	{
	printf("ѧ��:");
	scanf("%d",&(p->num));
	printf("\n");
	printf("����:");
	scanf("%d",&(p->age));
	printf("\n");
	printf("����:");
	scanf("%s",&(p->name));
	printf("\n");
	printf("��ѧ:");
	scanf("%f",(&p->math));
	printf("\n");
	printf("����:");
	scanf("%f",&(p->physics));
	printf("\n");
	printf("Ӣ��:");
	scanf("%f",&(p->English));
	printf("����س������Ǽǳɼ�,��q�˳�\n");
	getchar();
	scanf("%c",&k);
	if(k=='q')
		break;
	else 
		printf("���������\n");
	}
	savedata(head);
}


void glance(struct Student *head)
{
	float sum;
	struct Student *p=head;

	printf("ѧ��  ����   ����     ��ѧ  ����  Ӣ��  �ܷ�\n");
	for(;p->next!=NULL;p=p->next)
	{
	sum=p->math+p->physics+p->English;
	printf("%-7d%-5d%-10s%-6.1f%-6.1f%-6.1f%-6.1f\n",p->num,p->age,p->name,p->math,p->physics,p->English,sum);
	}
}


void savedata(struct Student *head)
{
	 FILE *fp;
	 char res[256];
	 struct Student *p=head;

	 if((fp=fopen("D://data.txt","w+"))==NULL)
	 {
		 printf("cannot open the file!\n");
		 exit(0);
	 }

	 while(p!=NULL)
	 {
		 sprintf(res,"%d %d %s %f %f %f",p->num,p->age,p->English,p->physics,p->math);
		 fputs(res,fp);
		 p=p->next;
	 }

	 fflush(fp);
	 fclose(fp);

}