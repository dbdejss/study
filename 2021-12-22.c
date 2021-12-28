//#include <stdio.h>
//struct book		//创建一个结构体
//{
//	char name[20];
//	int price;
//};
//int main()
//{
//	struct book b1 = {"C语言程序设计",50};			//创建一个结构体变量
	//printf("书名:%s\n",b1.name);
	//printf("价格:%d\n",b1.price);
	//b1.price = 15;
	//printf("修改后的价格:%d\n",b1.price);
	//struct book* p = &b1;
	//printf("%s\n",(*p).name);
	//printf("%d\n",(*p).price);
//printf("%s\n",p -> name);
//printf("%d\n",p -> price);
//return 0;
//}
#include <stdio.h>

struct stu				//创建一个结构体
{
	char name[20];		//名字
	int age;			//年龄
	char sex[5];		//性别
	char id[15];			//学号
};
int main()
{
	struct stu s={"张三",20,"男","20185427"};		//创建结构体变量
	struct stu* p = &s;
	printf("姓名:%s  年龄:%d  性别:%s  学号:%s\n",s.name,s.age,s.sex,s.id);		//结构成员操作符
	printf("姓名:%s  年龄:%d  性别:%s  学号:%s\n",p -> name,p -> age,p -> sex,p -> id);			//结构体指针操作符
	return 0;
}
