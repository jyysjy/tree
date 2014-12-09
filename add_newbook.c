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
	int num;		//추가할 도서의 권수 
	char test[10];
	struct book *b = NULL;
	//FILE *fp = NULL;

	printf("추가할 도서의 권수 >>");
	scanf("%d", &num);
	b = (struct book*)malloc(sizeof(struct book)*num);

	while( i < num )
	{
		printf("Info\n새 도서의 정보를 입력합니다. 초기에 대출가능여부는 1로 주시고. 빌려간 학생의 학번은 0으로 하시면 됩니다.\n");
		gets(test);

		printf("도서 제목 :");
		gets(b[i].title);

		printf("저자 :");
		gets(b[i].author);

		printf("출판사 :");
		gets(b[i].publisher);

		printf("도서 번호 :");
		scanf("%d", &b[i].bookNum);

		printf("대출가능여부 :");
		scanf("%d", &b[i].checkout);

		printf("빌려간 학생의 학번 : ");
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
		printf("book.txt 열기 실패\n");
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
	printf("현재 저장되어 있는 도서의 목록을 보여준다.");
	//FILE *fp = NULL;
		fp = fopen("book.txt", "a+");

	if( fp == NULL)
	{
		printf("book.txt 파일 열기 실패\n");
		return -1;
	}

	while( fgets(b1, 1000, fp) != NULL)
	fscanf(fp, "%s %s %s %d %d %d\n", b[i].title, b[i].author, b[i].publisher, b[i].bookNum, b[i].checkout, b[i].rentId);
}
*/