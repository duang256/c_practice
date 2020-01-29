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
	printf("输入p可以退出操作,输入任意键继续操作\n");
	scanf("%c",&z);
	

	}
}



char menu()                           
{
	char z;

	printf("A.插入一个新的学生记录\n");
	printf("B.修改学生记录\n");
	printf("C.删除一个学生记录\n");
	printf("D.登记成绩\n");
	printf("E.浏览全班成绩\n");
	printf("请输入选项:");
	scanf("%c",&z);
	return z;

}


void insert(struct Student *head)
{
	int k;
	struct Student *p=head;
	struct Student *p1=NULL;
	printf("输入插入的上一个学生学号:\n");
	scanf("%d",k);
	p1=(struct Student *)malloc(sizeof(struct Student));
	printf("学号:");
	scanf("%d",&p1->num);
	printf("年龄:");
	scanf("%d",&p1->age);
	printf("姓名:");
	scanf("%s",&p1->name);
	printf("数学:");
	scanf("%f",&p1->math);
	printf("物理:");
	scanf("%f",&p1->physics);
	printf("英语:");
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

	printf("请输入学生学号:\n");
	scanf("%d",&k);
	for(;p->next!=NULL;p=p->next)
	{
		if(p->num==k)
		{
			printf("输入数学成绩:\n");
			scanf("%f",&(p->math));
			printf("输入英语成绩:\n");
			scanf("%f",&(p->English));
			printf("输入物理成绩:\n");
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
	 
	 printf("请输入删除学生的学号:\n");
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
	printf("学号:");
	scanf("%d",&(p->num));
	printf("\n");
	printf("年龄:");
	scanf("%d",&(p->age));
	printf("\n");
	printf("姓名:");
	scanf("%s",&(p->name));
	printf("\n");
	printf("数学:");
	scanf("%f",(&p->math));
	printf("\n");
	printf("物理:");
	scanf("%f",&(p->physics));
	printf("\n");
	printf("英语:");
	scanf("%f",&(p->English));
	printf("输入回车继续登记成绩,按q退出\n");
	getchar();
	scanf("%c",&k);
	if(k=='q')
		break;
	else 
		printf("请继续输入\n");
	}
	savedata(head);
}


void glance(struct Student *head)
{
	float sum;
	struct Student *p=head;

	printf("学号  年龄   名字     数学  物理  英语  总分\n");
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