#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TRUE 1
#define FALSE 0

FILE *fp = NULL;

//int showbook(book b[]);

struct book {
	char title[40];
	char author[10];
	char publisher[20];
	int bookNum;
	int checkout;
	int rentId;
};

int main()
{
	int i = 0;
	int num;		//�߰��� ������ �Ǽ� 
	char test[10];
	struct book *b = NULL;
	//FILE *fp = NULL;

	printf("�߰��� ������ �Ǽ� >>");
	scanf("%d", &num);
	b = (struct book*)malloc(sizeof(struct book)*num);

	while( i < num )
	{
		printf("Info\n�� ������ ������ �Է��մϴ�. �ʱ⿡ ���Ⱑ�ɿ��δ� 1�� �ֽð�. ������ �л��� �й��� 0���� �Ͻø� �˴ϴ�.\n");
		gets(test);

		printf("���� ���� :");
		gets(b[i].title);

		printf("���� :");
		gets(b[i].author);

		printf("���ǻ� :");
		gets(b[i].publisher);

		printf("���� ��ȣ :");
		scanf("%d", &b[i].bookNum);

		printf("���Ⱑ�ɿ��� :");
		scanf("%d", &b[i].checkout);

		printf("������ �л��� �й� : ");
		scanf("%d", &b[i].rentId);

		i++;
	}

	for ( i = 0 ; i < num ; i++ )
	{
		printf("%s %s %s %d %d %d", b[i].title, b[i].author, b[i].publisher, b[i].bookNum, b[i].checkout, b[i].rentId);
	}

	fp = fopen("book.txt", "a+");

	if( fp == NULL)
	{
		printf("book.txt ���� ����\n");
		return -1;
	}

	for ( i = 0; i < num; i++)
	{
		fprintf(fp, "%s %s %s %d %d %d\n", b[i].title, b[i].author, b[i].publisher, b[i].bookNum, b[i].checkout, b[i].rentId);
	}

	fclose(fp);

	return 0;
}

/*
int showbook(int b[]){
	book b1 = b;
	printf("���� ����Ǿ� �ִ� ������ ����� �����ش�.");
	//FILE *fp = NULL;
		fp = fopen("book.txt", "a+");

	if( fp == NULL)
	{
		printf("book.txt ���� ���� ����\n");
		return -1;
	}

	while( fgets(b1, 1000, fp) != NULL)
	fscanf(fp, "%s %s %s %d %d %d\n", b[i].title, b[i].author, b[i].publisher, b[i].bookNum, b[i].checkout, b[i].rentId);
}
*/