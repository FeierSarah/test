#define _CRT_SECURE_NO_WARNINGS //ѹ���ϰ汾C���о���ĺ���
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<WinSock2.h>  //windowsͨ��Э��
#include<Windows.h>
#include"C:\Program Files\MySQL\MySQL Server 5.7\include\mysql.h"
#pragma comment(lib,"libmysql.lib")  //mysql�Ķ�̬���ӿ�

//��Ҫ����
MYSQL mysql, *sock;
const char *host = "127.0.0.1";
const char *user = "root";
const char *pass = "111111";   //�����Լ���������޸�
const char *db = "group";    //�����Լ����ݿ�����޸�
const int port = 3306;       //Ĭ�϶˿ں�3306
const char *win_socket = NULL;
int xianshitiaoshu;   //��ҳ��ѯ��ÿҳ��ʾ������
const long flag = 0;  //ͨ��Ϊ0
const char* query;  //�����ѯ�����
MYSQL_RES* result; //�����ָ��
MYSQL_ROW row;   
//��Ҫ����



//��ѯ���
void selectAll(int page)
{
	if (page == 1){
		printf("������ÿҳ��ʾ����:");
		scanf("%d", &xianshitiaoshu);
	}
	if (page == -1){
		return;
	}
	int index = (page - 1) *xianshitiaoshu;
	//query = "select * from emp limit 0,3";

	char *sql = (char*)malloc(100);
	sprintf(sql, "select * from emp limit %d,%d", index,xianshitiaoshu);
	if (mysql_query(&mysql, sql) != 0){    //����ֵ ��ѯ�ɹ���0
		printf("��ѯʧ��");
		exit(1);
	}
	else{
		if ((result = mysql_store_result(&mysql)) == NULL){
			printf("�޽��,�����޷��洢�����");
		}
		else{
			printf("\t\t\t\t\t��%dҳ\n",page);
			while ((row = mysql_fetch_row(result)) != NULL){
				printf("%s\t%s\t%s\t\t%s\t%s\t%s\t%s\t%s\n", row[0],row[1],row[2],row[3],row[4],row[5],row[6],row[7]);
			}
		}
	}
	//�ͷŽ����
	mysql_free_result(result);
	printf("��һҳ������-1�˳�)");
	int cho;  //���������ҳ��
	printf("��ѡ��:");
	scanf("%d", &cho);
	system("cls");

	selectAll(cho);


	//�ͷ�����
	//mysql_close(sock);
}


//�޸�����
void update1()
{
	char name[20];
	printf("������Ҫ�޸�нˮ��Ա������:");
	scanf("%s", name);
	printf("������Ա��нˮ");
	float sal ;
	scanf("%f", &sal);
	char* sql = (char*)malloc(100);
	sprintf(sql, "update emp set sal = %f where ename = '%s'", sal, name);
	if (mysql_query(&mysql, sql) != 0){    //����ֵ ��ѯ�ɹ���0
		printf("��ѯʧ��");
		exit(1);
	}
	else{
		if ((result = mysql_store_result(&mysql)) == NULL){
			printf("�ɹ���Ӱ����%d��",mysql_affected_rows(&mysql));
		}
		else{
			printf("ʧ��");
		}
	}


}

//�������ݹ���
void add()
{
	int empno;
	char ename[20];
	char job[20];
	int mgr;
	char hiredate[20];
	float sal;
	float comm;
	int deptno;
	printf("������Ҫ���ӵ�Ա����ţ�����������ְλ����˾����Ӷʱ�䣬���ʣ�comm��ְλ��ţ�ְ����������Լ�����ÿո������:\n");
	scanf("%d%s%s%d%s%f%f%d", &empno, ename, job, &mgr, hiredate, &sal, &comm, &deptno);
	char* sql2 = (char*)malloc(100);
	sprintf(sql2, "insert into emp values(%d,'%s','%s',%d,'%s',%f,%f,%d)",empno,ename,job,mgr,hiredate,sal,comm,deptno);

	if (mysql_query(&mysql, sql2) != 0){    //����ֵ ��ѯ�ɹ���0
		printf("����ʧ��");
		exit(1);
	}
	else{
		if ((result = mysql_store_result(&mysql)) == NULL){
			printf("�ɹ���Ӱ����%d��\n", mysql_affected_rows(&mysql));
		}
		else{
			printf("ʧ��");
		}
	}
}

//ɾ������
void DeleteData(){
	char* sql2 = (char*)malloc(100);
	int DeleEmpno;
	printf("Ҫɾ����ְ���ţ�");
	scanf("%d", &DeleEmpno);
	query = "delete from emp where empno='%d'";
	sprintf(sql2, query,DeleEmpno);

	if (mysql_query(&mysql, sql2) != 0){    //����ֵ ��ѯ�ɹ���0
		printf("ɾ��ʧ��");
		exit(1);
	}
	else{
		if ((result = mysql_store_result(&mysql)) == NULL){
			printf("�ɹ���Ӱ����%d��\n", mysql_affected_rows(&mysql));
		}
		else{
			printf("ʧ��");
		}
	}
}

//����mysql���ݿ�
void connect(){
	//����֮ǰ�ĳ�ʼ��
	mysql_init(&mysql);  //ȡ��ַ
	if ((sock = mysql_real_connect(&mysql, host, user, pass, db, port, win_socket, flag)) == NULL){
		printf("����ʧ��");
		fprintf(stderr,"%s", mysql_error(&mysql));
		exit(1);
	}
	else{
		mysql_query(&mysql, "set names GBK");    //�����ַ����໥ת����������û���⣬�Ž������û����
		fprintf(stderr, "���ӳɹ�!\n");
	}
}

//����ѡ�����

void gongnengxuanze(){
	printf("�鿴����� �밴1\n");
	printf("ɾ��Ա������ �밴2\n");
	printf("����Ա������ �밴3\n");
	printf("����Ա�����ݹ��� �밴4\n");
	printf("��ѡ����ҪӦ�õĹ���(0�˳�)\n");
	int key;
	scanf("%d",&key);
	system("cls");
	switch (key){
		case 1:	selectAll(1);
		  	    gongnengxuanze();
		case 2: DeleteData();
				gongnengxuanze();
		case 3: add();
				gongnengxuanze();
		case 4: update1();
				gongnengxuanze();
		default: exit(0);


		}
}
int main()
{
	connect();
	gongnengxuanze();
	return 0;
}