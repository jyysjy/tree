#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TRUE 1
#define FALSE 0
#define MAX 100

int i=0, j=0;//�л� ��, �缭 ��
int k=0;//���� å ��
int s;


FILE *fp_maneger;//�缭 ���� ����
FILE *fp_student;//�л� ���� ����
FILE *fp_book;//���� ���� ����

int position;//�л��� 1, �缭�� 2
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
	printf(" - ID(����): ");
	scanf("%d",&searchId);
	i =0;
	 while(1)    {       
		 if(fscanf(fp_maneger, "%d %s %s", &copy[i].id, &copy[i].pw, copy[i].name ) == EOF)
			 break;//���о� ���� ���� Ż��      
		 i++;//�о�� ���� ī��Ʈ    
	 } 

	fclose(fp_maneger);//���� �ݱ�
	
	for(s = 0; s <= i ;s++){
		if(searchId == copy[s].id){
			break;
		}
		printf("��ġ�ϴ� ������ �����ϴ�.\n");
	}
	printf("*���� ���� ������Ʈ(��� �׸� �Է�)\n");
	//printf("- ���� : ");printf("- ���� : ");printf("- ���ǻ� : ");printf("- ���� ��ȣ : ");printf("- ���� ���� ���� : ");printf("- ������ �л��� �й� : "); 
	printf("- ���� : ");
	scanf("%d", &copy[s].id);
	gets(test);
	printf("- �н����� : ");
	gets(copy[s].pw);
	printf("- �̸� : ");
	gets(copy[s].name);
	fp_maneger = fopen("manegerList.txt", "w");
	for(s = 0; s < i; s++)
		fprintf(fp_maneger, "%-8d %10s %10s\n", copy[s].id,copy[s].pw,copy[s].name);
	fclose(fp_maneger);//���� �ݱ�

	return 0;
}