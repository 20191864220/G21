#include <stdio.h>
#include <string.h>


int main()
{
	void input_num_name(int num[], char name[][16], int n);
	void sort_num_name(int num[], char name[][16], int n); 
	void search_num_name(int num[], char name[][16], int n, int search_num);
	int num[100],search_num;
	int i,j,n;
	char name[100][16];
	printf("����˾�ж���λԱ����");
	scanf("%d", &n);
	input_num_name(num, name, n);
	sort_num_name(num, name, n);
	printf("��������Ҫ���ҵ�Ա�����ţ�");
	scanf("%d", &search_num);
	search_num_name(num, name, n, search_num);
	return 0;
}

void input_num_name(int num[], char name[][16], int n)
{
	int i,j;
	for(i=0;i<n;i++){
		printf("���������%dλԱ���Ĺ��ź��������ո����:\n",i+1);
		scanf("%d", &num[i]);
		gets(name[i]);
	}
	printf("��������Ա����Ϣ����:\n");
	for(i=0;i<n;i++){
		printf("���ţ�%d ������%s\n", num[i], name[i]);
	}
} 

void sort_num_name(int num[], char name[][16], int n)
{
	printf("��������С������������:\n");
	int i,j;
	int temp_num;
	char temp_name[16];
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(num[j]>num[j+1]){
				temp_num = num[j];
				num[j] = num[j+1];
				num[j+1] = temp_num;
				strcpy(temp_name,name[j]);
				strcpy(name[j],name[j+1]);
				strcpy(name[j+1],temp_name);
				  // �ַ������鲻��ֱ�Ӹ�ֵ����������Ҫͨ��strcpy������ 

			}
		}
	}
	for(i=0;i<n;i++){
		printf("���ţ�%d ������%s\n", num[i], name[i]);
	} 
	
} 

void search_num_name(int num[], char name[][16], int n, int search_num)
{
	int low = 0;
	int high = n-1;
	int mid;
	int i=1;
	while(low<high){
		mid = (high+low)/2;
		if(num[mid]==search_num){
			printf("��Ҫ���ҵ�Ա����Ϣ���£�\n���ţ�%d ������%s\n", num[mid], name[mid]);
			i = 0;
			break;
		}else if(num[mid]>search_num){
			high = mid-1;
		}else{
			low = mid+1;
		}
	}
	
}

