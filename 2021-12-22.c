//#include <stdio.h>
//struct book		//����һ���ṹ��
//{
//	char name[20];
//	int price;
//};
//int main()
//{
//	struct book b1 = {"C���Գ������",50};			//����һ���ṹ�����
	//printf("����:%s\n",b1.name);
	//printf("�۸�:%d\n",b1.price);
	//b1.price = 15;
	//printf("�޸ĺ�ļ۸�:%d\n",b1.price);
	//struct book* p = &b1;
	//printf("%s\n",(*p).name);
	//printf("%d\n",(*p).price);
//printf("%s\n",p -> name);
//printf("%d\n",p -> price);
//return 0;
//}
#include <stdio.h>

struct stu				//����һ���ṹ��
{
	char name[20];		//����
	int age;			//����
	char sex[5];		//�Ա�
	char id[15];			//ѧ��
};
int main()
{
	struct stu s={"����",20,"��","20185427"};		//�����ṹ�����
	struct stu* p = &s;
	printf("����:%s  ����:%d  �Ա�:%s  ѧ��:%s\n",s.name,s.age,s.sex,s.id);		//�ṹ��Ա������
	printf("����:%s  ����:%d  �Ա�:%s  ѧ��:%s\n",p -> name,p -> age,p -> sex,p -> id);			//�ṹ��ָ�������
	return 0;
}
