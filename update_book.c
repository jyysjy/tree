#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TRUE 1
#define FALSE 0
#define MAX 100

int i=0, j=0;//학생 수, 사서 수
int k=0;//빌린 책 수
int s;


FILE *fp_maneger;//사서 계정 파일
FILE *fp_student;//학생 계정 파일
FILE *fp_book;//도서 정보 파일

int position;//학생은 1, 사서는 2
int searchId;
int num;	

char test[10];

typedef struct maneger{
	int id;
	char pw[6];
	char name[20];
}MANEGER;

int main(){
	MANEGER copy[MAX];
	fp_maneger = fopen("manegerList.txt", "r");
	printf(" - ID(교번): ");
	scanf("%d",&searchId);
	i =0;
	 while(1)    {       
		 if(fscanf(fp_maneger, "%d %s %s", &copy[i].id, &copy[i].pw, copy[i].name ) == EOF)
			 break;//못읽어 오면 루프 탈출      
		 i++;//읽어온 갯수 카운트    
	 } 

	fclose(fp_maneger);//파일 닫기
	
	for(s = 0; s <= i ;s++){
		if(searchId == copy[s].id){
			break;
		}
		printf("일치하는 정보가 없습니다.\n");
	}
	printf("*도서 정보 업데이트(모든 항목 입력)\n");
	//printf("- 제목 : ");printf("- 저자 : ");printf("- 출판사 : ");printf("- 도서 번호 : ");printf("- 대출 가능 여부 : ");printf("- 대출한 학생의 학번 : "); 
	printf("- 교번 : ");
	scanf("%d", &copy[s].id);
	gets(test);
	printf("- 패스워드 : ");
	gets(copy[s].pw);
	printf("- 이름 : ");
	gets(copy[s].name);
	fp_maneger = fopen("manegerList.txt", "w");
	for(s = 0; s < i; s++)
		fprintf(fp_maneger, "%-8d %10s %10s\n", copy[s].id,copy[s].pw,copy[s].name);
	fclose(fp_maneger);//파일 닫기

	return 0;
}