#include<stdio.h>

struct login {
	char id[7]; //�й�
	char name[10]; //�̸�
	char pw[6]; //pw 
};

struct book_search {
	char title[20]; //���� 
};

struct book_update {
	char title[20]; //���� 
	char author[10]; //����
	char publisher[20]; //���ǻ�
	char book_num[20]; //������ȣ
};

void main() {
	struct login log[1];
	struct book_search search[1];
	struct book_update update[1];

	int i; char j;

	printf("***** LIBRARY INFORMATION SYSTEM *****\n");
	printf("* �����Ϸ��� '0'�� �Է��Ͻÿ�.\n\n");
	printf("------------------------------------------------------------------\n");
	here2:
	printf("* 1.�� ���� ����, 2.'�缭' ���� �α���, 3.'�л�' ���� �α���\n (1or2or3 �Է�) => ");
	scanf("%d",&i);
	printf("------------------------------------------------------------------\n");
	switch(i) {
		case 0:
			break;
		case 1:
			printf("* �� ���� ����\n\n");
			printf(" - �̸�: ");
			scanf("%s",log[1].name);
			printf(" - ID(�й�or����): ");
			scanf("%s",log[1].id);
			printf(" - PW(6����): ");
			scanf("%s",log[1].pw);
			printf(" - PW ���Է�: ");
			scanf("%s",log[1].pw); //����: ���Է� ��, ����ġ�� ���
			printf("\n => ���� ������ �Ϸ�Ǿ����ϴ�.\n\n");
			printf("------------------------------------------------------------------\n");
			goto here2;
		case 2:
			printf("* '�缭' ���� �α���\n\n");
			printf(" - ID(����): ");
			scanf("%s",log[1].id);
			printf(" - PW(6����): ");
			scanf("%s",log[1].pw);
			printf("------------------------------------------------------------------\n");
			here1:
			printf("* �缭\n");
			printf(" 1.���� �˻�\n 2.���� �߰�\n 3.���� ���� ������Ʈ\n 4.���� ���� ����\n 5.���� �α׾ƿ�\n");
			printf("  : ��� ���� => ");
			scanf("%d",&i);
			printf("\n\n");
				switch(i) {
					case 0:
						break;
					case 1:
						printf("* ���� �˻�\n");
						printf(" - ���� ���� �Է�: ");
						scanf("%s",search[1].title);
						printf("\n\n");
						goto here1;
					case 2:
						printf("* ���� �߰�\n");
						printf(" => ���� ���� �Է�\n");
						printf(" - ����: ");
						scanf("%s",update[1].title);
						printf(" - ����: ");
						scanf("%s",update[1].author);
						printf(" - ���ǻ�: ");
						scanf("%s",update[1].publisher);
						printf(" - ���� ��ȣ: ");
						scanf("%s",update[1].book_num);
						printf("\n => ���� �߰��� �Ϸ�Ǿ����ϴ�.\n\n");
						printf("\n\n");
						goto here1;
					case 3:
						printf("* ���� ���� ������Ʈ\n");
						printf(" => ������Ʈ�� ���� �˻�\n");
						printf(" - ���� ���� �Է�: ");
						scanf("%s",search[1].title);
						printf("\n => ���� ������Ʈ�� �Ϸ�Ǿ����ϴ�.\n\n");
						printf("\n\n");
						goto here1;
					case 4:
						printf("* ���� ���� ����\n");
						// pass
						printf("\n => ���� ������ �Ϸ�Ǿ����ϴ�.\n\n");
						printf("\n\n");
						goto here1;
					case 5:
						printf("* ���� �α׾ƿ�\n");
						printf("\n\n");
						goto here2;
				}
			break;
		case 3:
			printf("* '�л�' ���� �α���\n\n");
			printf(" - ID(�й�): ");
			scanf("%s",log[1].id);
			printf(" - PW(6����): ");
			scanf("%s",log[1].pw);
			printf("------------------------------------------------------------------\n");
			here3:
			printf("* �л�\n");
			printf(" 1.���� �˻�\n 2.���� ���� ���� ���� ��� Ȯ��\n 3.���� �α׾ƿ�\n");
			printf("  : ��� ���� => ");
			scanf("%d",&i);
			printf("\n\n");
				switch(i) {
					case 0:
						break;
					case 1:
						printf("* ���� �˻�\n");
						printf(" - ���� ���� �Է�: ");
						scanf("%s",search[1].title);
						// ���� ���� ����
						/*
						printf(" - ���� ���� ����(y/n): ");
						scanf("%c",&j);
						printf("\n");
						switch(j) {
						case 'y':
							printf("  => ���� ����\n");
						case 'n':
							printf("  => ���� �Ұ�\n");
						}*/
						printf("\n\n");
						goto here3;
					case 2:
						printf("* ���� ���� ���� ���� ���\n");
						// pass
						printf("\n\n");
						goto here3;
					case 3:
						printf("* ���� �α׾ƿ�\n");
						printf("\n\n");
						goto here2;
				}
			break;
	}
}