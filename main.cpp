#include<stdio.h>
#include<stdlib.h>
#define size sizeof(struct stu)
struct stu
{
	int num;
	char name[20];
	char sex;
	int age;
	float score[3];
	float and;
}stu[300];



void dayin(int k)
{
	int i;
	printf("ѧ��    ����     �Ա�     ����    Ӣ��     ����     ����");
	printf("\n-------------------------------------------------------------------\n");
	for (i = 0; i < k; i++)
		printf("%6d%6s%6c  %6d  %6.2f  %6.2f  %6.2f\n", stu[i].num, stu[i].name, stu[i].sex, stu[i].age, stu[i].score[0], stu[i].score[1], stu[i].score[2]);
	printf("\n-------------------------------------------------------------------\n");
}


void adddate1(int j)
{
	int i = 0;
	for (; i < j; i++)
	{
		printf("������ѧ��ѧ�ţ�");  scanf("%d", &stu[i].num);
		printf("������ѧ��������");  scanf("%s", &stu[i].name);
		getchar();
		printf("�������Ա�(��F ŮM)��");  scanf("%c", &stu[i].sex);
		printf("����������"); scanf("%d", &stu[i].age);
		printf("������Ӣ��ɼ���");  scanf("%f", &stu[i].score[0]);
		printf("����������ɼ���");  scanf("%f", &stu[i].score[1]);
		printf("�����������ɼ���"); scanf("%f", &stu[i].score[2]);
	}
}

void zengjia(int j)
{
	printf("������ѧ��ѧ�ţ�");  scanf("%d", &stu[j].num);
	printf("������ѧ��������");  scanf("%s", &stu[j].name);
	getchar();
	printf("�������Ա�(��F ŮM)��");  scanf("%c", &stu[j].sex);		printf("����������"); scanf("%d", &stu[j].age);

	printf("������Ӣ��ɼ���");  scanf("%f", &stu[j].score[0]);
	printf("����������ɼ���");  scanf("%f", &stu[j].score[1]);
	printf("�����������ɼ���"); scanf("%f", &stu[j].score[2]);
}
void editdata(int j)
{
	int i, k;
	int no;
	printf("������Ҫ�޸�ѧ����ѧ��:");
	scanf("%d",&no);
	k = -1;
	for (i = 0; i<j; i++)
	{
		if (no==stu[i].num)
		{
			k = i;
			break;
		}
	}
	if (k == -1)
	{
		printf("\n\nû���ҵ���ѧ��(ѧ��d)!", no);
	}
	else
	{
		printf("������ѧ��ѧ�ţ�");  scanf("%d", &stu[k].num);
		printf("������ѧ��������");  scanf("%s", &stu[k].name); getchar();
		printf("�������Ա�(��F ŮM)��");  scanf("%c", &stu[k].sex);		printf("����������"); scanf("%d", &stu[k].age);

		printf("������Ӣ��ɼ���");  scanf("%f", &stu[k].score[0]);
		printf("����������ɼ���");  scanf("%f", &stu[k].score[1]);
		printf("�����������ɼ���"); scanf("%f", &stu[k].score[2]);
		printf("\n�޸����ݳɹ�\n");
	}
}
void shanchu(int j)
{
	int i, k;
	int n;
	printf("������Ҫɾ��ѧ����ѧ��:");
	scanf("%d",&n);
	k = -1;
	for (i = 0; i < j; i++)
	{
		if (n == stu[i].num)
		{
			k = i;
			break;
		}
	}
	if (k == -1)
	{
		printf("\n\nû���ҵ���ѧ��(ѧ��%d)!", n);
	}
	else
	{
		for (i = k; i < j - 1; i++)	//�����������ǰ��һλ
			stu[i] = stu[i + 1];
	}
}
void querydatano(int j)
{
	int i, k, l;

	printf("ѡ������ʽ��1.ѧ�� \n2.���� \n3.�ܳɼ���");
	scanf("%d", &i);
	switch (i)
	{
	case 1: for (k = 0; k < j - 1; k++)
		for (l = 0; l < j - 1 - l; l++)
			if (stu[l].num > stu[l + 1].num)
			{
				stu[300] = stu[l];
				stu[l] = stu[l + 1];
				stu[l + 1] = stu[300];

			}break;
	case 2: for (k = 0; k < j - 1; k++)
		for (l = 0; l < j - 1 - l; l++)
			if (stu[l].age > stu[l + 1].age)
			{
				stu[300] = stu[l];
				stu[l] = stu[l + 1];
				stu[l + 1] = stu[300];

			}break;
	case 3: for (k = 0; k < j - 1; k++)
		for (l = 0; l < j - 1 - l; l++)
			if (stu[l].and > stu[l + 1].and)
			{
				stu[300] = stu[l];
				stu[l] = stu[l + 1];
				stu[l + 1] = stu[300];

			}break;
	}
	dayin(j);
}
void find(int j)
{
	int max, min, i, k, l, m=0;
	printf("��߷֣�");
	scanf("%d", &max);
	printf("��ͷ֣�");
	scanf("%d", &min);
	printf("����������ѧ��Ϊ��\n");
	for (i = 0; i < j; i++)
		if (stu[i].and >= min&&stu[i].and <= max)
		{
			printf("%d%s\n", stu[i].num, stu[i].name);
			m++;
		}
	printf("������Ϊ%d", m);
}
void sortdatano(j)
{
	int i, k, l, m, n, o;
	printf("Ҫ���ĸ�ѧ��ǰ������ݣ�");
	scanf("%d",&i);
	for (k = 0; k < j; k++)
		if (i = stu[k].num)
			break;
	//k�Ժ�����ȫ���Ųһλ
	for (o = j - 1; o >= k; o--)
		stu[o] = stu[o + 1];
	zengjia(k);
}

void main()
{
	int fun, i = 1, j, k = 0;
	FILE *fp;
	printf("�ļ����Ƿ���ԭʼ���ݣ�1-yes��0-no��");
	scanf("%d", &fun);
	if (fun == 0)
	{
		printf("��Ҫ��ӵ��ܹ�����:");
		scanf("%d", &j);
		adddate1(j);
	}
	else
	{

		if ((fp = fopen("D:\\data.dat", "r")) == NULL) // ����ļ�������
		{
			printf("ERROR!");

		}
		while(!feof(fp))
		{
			fread(&stu[k], sizeof(struct stu), 1, fp);
			k++;
		}
		j = k-1;//������
		fclose(fp);
	}
	for (int m = 0; m < j; m++)
		stu[i].and = stu[i].score[0] + stu[i].score[1] + stu[i].score[2];

	while (i)
	{
		printf("�����빦�ܺ�[0-7]:\n");
		printf("1 �鿴����ѧ����Ϣ\n2 ����ѧ����¼(������������)\n3 ɾ��ѧ����¼\n4 �޸�ѧ����¼\n5 ���������\n6 ���ҷ�����\n7 ����ѧ����¼\n8 �˳�\n");
		scanf("%d", &fun);
		switch (fun)
		{
		case 1: dayin(j); break;        // �鿴����ѧ����Ϣ
		case 2: zengjia(j); j++; break;       // ����ѧ����¼ (��������)
		case 3: shanchu(j); j--;  break;      // ɾ��ѧ����¼
		case 4: editdata(j); break;    // �޸�ѧ����¼
		case 5: querydatano(j); break;   // �������
		case 6: find(j); break;   //  ���ҷ�����
		case 7:{ sortdatano(j); j++;} break;   //  ����ѧ����¼
		case 8: i = i - 1; break;                   // �˳�
		}
	}
	if ((fp = fopen("D:\\data.dat", "w")) == NULL)
	{
		printf("ERROR!");
		exit(0);
	}
	for (i = 0; i < j; i++)
		fwrite(&stu[i], sizeof(struct stu), 1, fp);
	fclose(fp);
}
