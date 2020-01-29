#include<stdio.h>             

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
students[33]={                     //成绩列表
{1,18,"陈宏文",60,75,71},
{2,18,"陈宇新",85,85,76},
{3,18,"陈郑龙",85,80,73},
{4,18,"仇志翔",65,67.5,87},
{5,18,"甘家航",80,52.5,87},
{6,18,"何凯伟",50,37.5,54},
{7,18,"解却昊",70,80,75},
{8,18,"康小龙",80,77.5,59},
{9,18,"李菲",50,42.5,62},
{10,18,"浦鹤年",90,82.5,74},
{11,18,"孙妤",80,40,71},
{12,18,"汪珊",85,42.5,63},
{13,18,"王晨浩",85,77.5,83},
{14,18,"王广财",90,72.5,75},
{15,18,"王韩伟",0,0,0},
{16,18,"王鑫",100,100,100},
{17,18,"项灵灵",65,70,63},
{18,18,"谢宛真",85,77.5,83},
{19,17,"邢鑫",100,100,100},
{20,18,"徐灿",80,55,81},
{21,18,"颜悦",75,70,63},
{22,18,"杨代国",90,57.5,67},
{23,18,"杨柯",85,70,80},
{24,18,"杨岩",85,55,91},
{25,18,"杨征",70,65,67},
{26,18,"于云帆",65,55,74},
{27,18,"张振",85,40,82},
{28,18,"赵泓宇",75,50,71},
{29,18,"邹鹏",75,50,71}};

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

	struct student *head,*p;                //建立链表
	head=&students[0];
	for(i=0;i<28;i++)
	{students[i].next=&students[i+1];}
	students[i].next=NULL;
	p=head;


	key=menu();   

	for(i=0;key!='r';i++)             //程序内部的菜单
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




void a(struct student *p1)                  //A功能
{
	int k,i=1,j=1;
	struct student *pa;
	printf("请输入插入学生的上一个学生的学号:");
	scanf("%d",&k);
	while(1)
	{
		while(i==k)
		{
			printf("年龄:");
			scanf("%d",&students[31].age);
			printf("姓名:");
			scanf("%s",&students[31].name);
			printf("数学:");
			scanf("%f",&students[31].math);
			printf("物理:");
			scanf("%f",&students[31].physics);
			printf("英语:");
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











void c(struct student *p3)   //C功能
{
	int i,k;
	printf("学生学号:");
	scanf("%d",&k);
	for(i=1;p3!=NULL;p3=p3->next,i++)
	{
		if(i==k-1)
		{
			p3->next=p3->next->next;break;
		}

	}
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
