#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int flag = 0;
typedef struct _Stu {
	char stuNum[20];
	char name[30];
	float engGrade;
	float mathGrade;
	float phyGrade;
	float CGrade;
	float ave;
	float sum;
	struct _Stu *next;
}Stu;
Stu *createList(int);
void printList(Stu *stu);
int main()
{
	int i, n, nChange;
	scanf("%d", &n);
	getchar();
	Stu *stu = createList(n);
	Stu *head = stu;
	char waste[4];
	for (i = 0; i < n; i++)
	{
		scanf("%s%s", stu->stuNum, stu->name);
		scanf("%f", &stu->engGrade);
		scanf("%f", &stu->mathGrade);
		scanf("%f", &stu->phyGrade);
		scanf("%f", &stu->CGrade);
		fgets(waste, 4, stdin);
		stu = stu->next;
	}
	printList(head);
	stu = head;
	scanf("%d", &nChange);
	char changeLesson[15], changeNum[20];
	float changeScore;
	while (nChange-- > 0)
	{
		stu = head;
		scanf("%s %s %f", changeNum, changeLesson, &changeScore);
		while (stu)
		{
			if (strcmp(stu->stuNum, changeNum) == 0)
			{
				if (strcmp(changeLesson, "English") == 0)
					stu->engGrade = changeScore;
				if (strcmp(changeLesson, "Math") == 0)
					stu->mathGrade = changeScore;
				if (strcmp(changeLesson, "Physics") == 0)
					stu->phyGrade = changeScore;
				if (strcmp(changeLesson, "C") == 0)
					stu->CGrade = changeScore;
				break;
			}
			stu = stu->next;
		}
	}
	printf("\nAlter:\n");
	printList(head);
	for (stu = head; stu != NULL; stu = stu->next)
	{
		stu->sum = stu->engGrade + stu->CGrade + stu->mathGrade + stu->phyGrade;
		stu->ave = stu->sum / 4;
	}
	printf("\nSumAndAvg:\n");
	printf("%-15s%-20s%-10s%-10s\n", "ID", "Name", "SUM", "AVG");
	stu = head;
	while (stu)
	{
		printf("%-15s%-20s%-10.2f%-10.2f\n",
			stu->stuNum, stu->name, stu->sum, stu->ave);
		stu = stu->next;
	}
	Stu *begin, *end;
	for (begin = head; begin != NULL; begin = begin->next)
		for (end = begin; end != NULL; end = end->next)
			if (end->ave < begin->ave)
			{
				char tmpNum[20], tmpName[20];
				strcpy(tmpNum, end->stuNum);
				strcpy(end->stuNum,begin->stuNum);
				strcpy(begin->stuNum, tmpNum);
				strcpy(tmpName,end->name);
				strcpy(end->name,begin->name);
				strcpy(begin->name,tmpName);
				float tmpScore = end->ave;
				end->ave = begin->ave;
				begin->ave=tmpScore;
			}
	printf("\nSort:\n");
	printf("%-15s%-20s%-10s\n", "ID", "Name", "AVG");
	stu = head;
	while (stu)
	{
		printf("%-15s%-20s%-10.2f\n",
			stu->stuNum, stu->name, stu->ave);
		stu = stu->next;
	}
	return 0;
}
void printList(Stu *stu)
{
	printf("%-15s%-20s%-10s%-10s%-10s%-10s\n", "ID", "Name", "English", "Math", "Physics", "C");
	while (stu)
	{
		printf("%-15s%-20s%-10.2f%-10.2f%-10.2f%-10.2f\n",
			stu->stuNum, stu->name, stu->engGrade, stu->mathGrade, stu->phyGrade, stu->CGrade);
		stu = stu->next;
	}
}
Stu *createList(int stuNum)
{
	static int num;
	static Stu *head;
	static Stu *tail;
	if (flag == 0)
	{
		num = stuNum;
		head = (Stu*)malloc(sizeof(Stu));
		tail = head;
		flag = 1;
	}
	if (num-- < 2)
	{
		tail->next = NULL;
		return head;
	}
else {
		tail->next = (Stu*)malloc(sizeof(Stu));
		tail = tail->next;
		return createList(num);
	}
}
