#include<stdio.h>  
#include<stdlib.h>
           
struct student                      //结构体student 包括学号 年龄 姓名 数学 物理 英语成绩  以及下一元素指针
{
		int num;
		int age;
		char name[20];
		float math;
		float physics;
		float English;
		struct student * next;
}


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
	char res[256];
	FILE * fp;

	struct student *head = NULL;
	struct student *last = NULL;                //建立链表
	struct student *current = NULL;
	/*
	head=&students[0];
	for(i=0;i<28;i++)
	{students[i].next=&students[i+1];
	printf("%d %d %s %f %f %f\n", students[i].num, students[i].age, students[i].name, students[i].English, students[i].math, students[i].physics);
	}
	students[i].next=NULL;
*/
	// save to file
	
	// open file
/*
	fp = fopen("D://data.txt", "w+");
	
	sprintf(res, "%d %d %s %f %f %f\n", students[0].num, students[0].age, students[0].name, students[0].English, students[0].math, students[0].physics);
	
	printf("res:%s \n", res);
	fputs(res, fp);


	fflush(fp);
	fclose(fp);
*/

	// read from file

	fp = fopen("D://data.txt", "r");

	while (fgets(res, 256, fp) != NULL) {
		current = (struct student *) malloc(sizeof(struct student));
		current->next = NULL;
		printf("res:%s", res);
		fscanf(res, "%d %d %s %f %f %f", &current->num, &current->age, &current->name, &current->English, &current->math, &current->physics);

		//struct student newStudent;
		if (head == NULL) {
			head = current;
		} else
		{
			last->next = current;
		}
		last = current;
	
	 //printf("%d,%d,%s,%f,%f,%f\n", testA.num, testA.age, testA.name, testA.English, testA.math, testA.physics);
	}

	fclose(fp);

	key=menu();   

	for(i=0;key!='r';i++)             //程序内部的菜单
	{ 
		
	switch(key)
	{
	case 'A':a(head);break;
	case 'B':b();break;
	case 'C':c(head);break;
	case 'D':d(head);break;
	case 'E':e();break;
	case 'F':f(head);break;
	}
	printf("您可以进行其他操作或者输入r退出\n");
	getchar();
	scanf("%c",&key);
	}

	

}


char menu()                            //输出菜单供用户选择
{
	char z;
	printf("A.插入一个新的学生记录\n");
	printf("B.修改学生记录\n");
	printf("C.删除一个学生记录\n");
	printf("D.登记成绩\n");
	printf("E.修改成绩\n");
	printf("F.浏览全班成绩\n");
	printf("请输入选项:");
	scanf("%c",&z);
	return z;
}

void saveData(struct student *head)
{
  FILE *fp = fopen("D://data.txt", "w+");
  struct student * p;
  char res[256];
  p = head;
 

  while (p != NULL) {
   	sprintf(res, "%d %d %s %f %f %f\n", p->num, p->age, p->name, p->English, p->math, p->physics);
	printf("aaa\n");
	fputs(res, fp);
	p = p->next;
  }

  fflush(fp);
  fclose(fp);

}


void a(struct student *p1)                  //A功能
{
	int k,i=1,j=1;
	struct student *pa;
	struct student *nst;
	printf("请输入插入学生的上一个学生的学号:");
	scanf("%d", &k);
	nst = (struct student *) malloc(sizeof(struct student));
	printf("学号:");
	scanf("%d",&nst->num);
	printf("年龄:");
	scanf("%d",&nst->age);
	printf("姓名:");
	scanf("%s",&nst->name);
	printf("数学:");
	scanf("%f",&nst->math);
	printf("物理:");
	scanf("%f",&nst->physics);
	printf("英语:");
	scanf("%f",&nst->English);
		
	for(i=1;p1->next!=NULL;i++,p1=p1->next)
	{
		if(p1->num == k)
		{
			pa=p1->next;
			p1->next= nst;
			nst->next=pa;
			break;
		}
	}

}


void b()               //B功能
{
	int k;
	printf("学生学号:\n");
	scanf("%d",&k);
	students[k-1].num=k;
	printf("年龄:");
	scanf("%d",&students[k-1].age);
	printf("\n");
	printf("姓名:");
	scanf("%s",&students[k-1].name);
	printf("\n");
	printf("数学:");
	scanf("%f",&students[k-1].math);
	printf("\n");
	printf("物理:");
	scanf("%f",&students[k-1].physics);
	printf("\n");
	printf("英语:");
	scanf("%f",&students[k-1].English);

}











void c(struct student *head)   //C功能
{
	int i,k;
	struct student *p3 = head;
	struct student *prev = p3;
	printf("学生学号:");
	scanf("%d",&k);
	while(p3 != NULL)
	{
		if(p3->num == k)
		{
			prev->next=p3->next;
			free(p3);
			break;
		}
		prev = p3;
		p3 = p3->next;

	}

	saveData(head);
}





void d(struct student *p4)    //D功能
{
	char k;
	for(;p4!=NULL;p4=p4->next)
	{
	printf("学号:");
	scanf("%d",&p4->num);
	printf("\n");
	printf("年龄:");
	scanf("%d",&p4->age);
	printf("\n");
	printf("姓名:");
	scanf("%s",&p4->name);
	printf("\n");
	printf("数学:");
	scanf("%f",&p4->math);
	printf("\n");
	printf("物理:");
	scanf("%f",&p4->physics);
	printf("\n");
	printf("英语:");
	scanf("%f",&p4->English);
	printf("输入回车继续登记成绩,按q退出\n");
	getchar();
	scanf("%c",&k);
	if(k=='q')
		break;
	else 
		printf("请继续输入\n");
	}

}


void e()                  //E功能
{
	int k,i=0,j=1;
	printf("学生学号:\n");
	scanf("%d",&k);
	
	while(j)
	{
	while(i==k-1)
	{
	printf("姓名:");
	scanf("%s",&students[i].name);
	printf("\n");
	printf("数学:");
	scanf("%f",&students[i].math);
	printf("\n");
	printf("物理:");
	scanf("%f",&students[i].physics);
	printf("\n");
	printf("英语:");
	scanf("%f",&students[i].English);
	j--;break;
	}
	i++;
	if(j==0)break;
	}


}



void f(struct student *p6)           //F功能
{
	float sum;
	int i;
	printf("学号  年龄   名字     数学  物理  英语  总分\n");
	for(i=1;p6!=NULL;p6=p6->next,i++)
	{
	sum=p6->math+p6->physics+p6->English;
	printf("%-7d%-5d%-10s%-6.1f%-6.1f%-6.1f%-6.1f\n",i,p6->age,p6->name,p6->math,p6->physics,p6->English,sum);
	}
}


