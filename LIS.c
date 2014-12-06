#include<stdio.h>

struct login {
	char id[7]; //학번
	char name[10]; //이름
	char pw[6]; //pw 
};

struct book_search {
	char title[20]; //제목 
};

struct book_update {
	char title[20]; //제목 
	char author[10]; //저자
	char publisher[20]; //출판사
	char book_num[20]; //도서번호
};

void main() {
	struct login log[1];
	struct book_search search[1];
	struct book_update update[1];

	int i; char j;

	printf("***** LIBRARY INFORMATION SYSTEM *****\n");
	printf("* 종료하려면 '0'을 입력하시오.\n\n");
	printf("------------------------------------------------------------------\n");
	here2:
	printf("* 1.새 계정 생성, 2.'사서' 계정 로그인, 3.'학생' 계정 로그인\n (1or2or3 입력) => ");
	scanf("%d",&i);
	printf("------------------------------------------------------------------\n");
	switch(i) {
		case 0:
			break;
		case 1:
			printf("* 새 계정 생성\n\n");
			printf(" - 이름: ");
			scanf("%s",log[1].name);
			printf(" - ID(학번or교번): ");
			scanf("%s",log[1].id);
			printf(" - PW(6글자): ");
			scanf("%s",log[1].pw);
			printf(" - PW 재입력: ");
			scanf("%s",log[1].pw); //예외: 재입력 시, 불일치할 경우
			printf("\n => 계정 생성이 완료되었습니다.\n\n");
			printf("------------------------------------------------------------------\n");
			goto here2;
		case 2:
			printf("* '사서' 계정 로그인\n\n");
			printf(" - ID(교번): ");
			scanf("%s",log[1].id);
			printf(" - PW(6글자): ");
			scanf("%s",log[1].pw);
			printf("------------------------------------------------------------------\n");
			here1:
			printf("* 사서\n");
			printf(" 1.도서 검색\n 2.도서 추가\n 3.도서 정보 업데이트\n 4.도서 정보 삭제\n 5.계정 로그아웃\n");
			printf("  : 기능 선택 => ");
			scanf("%d",&i);
			printf("\n\n");
				switch(i) {
					case 0:
						break;
					case 1:
						printf("* 도서 검색\n");
						printf(" - 도서 제목 입력: ");
						scanf("%s",search[1].title);
						printf("\n\n");
						goto here1;
					case 2:
						printf("* 도서 추가\n");
						printf(" => 세부 정보 입력\n");
						printf(" - 제목: ");
						scanf("%s",update[1].title);
						printf(" - 저자: ");
						scanf("%s",update[1].author);
						printf(" - 출판사: ");
						scanf("%s",update[1].publisher);
						printf(" - 도서 번호: ");
						scanf("%s",update[1].book_num);
						printf("\n => 도서 추가가 완료되었습니다.\n\n");
						printf("\n\n");
						goto here1;
					case 3:
						printf("* 도서 정보 업데이트\n");
						printf(" => 업데이트할 도서 검색\n");
						printf(" - 도서 제목 입력: ");
						scanf("%s",search[1].title);
						printf("\n => 도서 업데이트가 완료되었습니다.\n\n");
						printf("\n\n");
						goto here1;
					case 4:
						printf("* 도서 정보 삭제\n");
						// pass
						printf("\n => 도서 삭제가 완료되었습니다.\n\n");
						printf("\n\n");
						goto here1;
					case 5:
						printf("* 계정 로그아웃\n");
						printf("\n\n");
						goto here2;
				}
			break;
		case 3:
			printf("* '학생' 계정 로그인\n\n");
			printf(" - ID(학번): ");
			scanf("%s",log[1].id);
			printf(" - PW(6글자): ");
			scanf("%s",log[1].pw);
			printf("------------------------------------------------------------------\n");
			here3:
			printf("* 학생\n");
			printf(" 1.도서 검색\n 2.현재 대출 중인 도서 목록 확인\n 3.계정 로그아웃\n");
			printf("  : 기능 선택 => ");
			scanf("%d",&i);
			printf("\n\n");
				switch(i) {
					case 0:
						break;
					case 1:
						printf("* 도서 검색\n");
						printf(" - 도서 제목 입력: ");
						scanf("%s",search[1].title);
						// 대출 가능 여부
						/*
						printf(" - 대출 가능 여부(y/n): ");
						scanf("%c",&j);
						printf("\n");
						switch(j) {
						case 'y':
							printf("  => 대출 가능\n");
						case 'n':
							printf("  => 대출 불가\n");
						}*/
						printf("\n\n");
						goto here3;
					case 2:
						printf("* 현재 대출 중인 도서 목록\n");
						// pass
						printf("\n\n");
						goto here3;
					case 3:
						printf("* 계정 로그아웃\n");
						printf("\n\n");
						goto here2;
				}
			break;
	}
}