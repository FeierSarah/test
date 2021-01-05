#define _CRT_SECURE_NO_WARNINGS //压制老版本C的有警告的函数
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<WinSock2.h>  //windows通信协议
#include<Windows.h>
#include"C:\Program Files\MySQL\MySQL Server 5.7\include\mysql.h"
#pragma comment(lib,"libmysql.lib")  //mysql的动态链接库

//必要配置
MYSQL mysql, *sock;
const char *host = "127.0.0.1";
const char *user = "root";
const char *pass = "111111";   //根据自己密码进行修改
const char *db = "group";    //根据自己数据库进行修改
const int port = 3306;       //默认端口号3306
const char *win_socket = NULL;
int xianshitiaoshu;   //分页查询，每页显示的人数
const long flag = 0;  //通常为0
const char* query;  //保存查询的语句
MYSQL_RES* result; //结果集指针
MYSQL_ROW row;   
//必要配置



//查询语句
void selectAll(int page)
{
	if (page == 1){
		printf("请输入每页显示条数:");
		scanf("%d", &xianshitiaoshu);
	}
	if (page == -1){
		return;
	}
	int index = (page - 1) *xianshitiaoshu;
	//query = "select * from emp limit 0,3";

	char *sql = (char*)malloc(100);
	sprintf(sql, "select * from emp limit %d,%d", index,xianshitiaoshu);
	if (mysql_query(&mysql, sql) != 0){    //返回值 查询成功是0
		printf("查询失败");
		exit(1);
	}
	else{
		if ((result = mysql_store_result(&mysql)) == NULL){
			printf("无结果,或者无法存储结果集");
		}
		else{
			printf("\t\t\t\t\t第%d页\n",page);
			while ((row = mysql_fetch_row(result)) != NULL){
				printf("%s\t%s\t%s\t\t%s\t%s\t%s\t%s\t%s\n", row[0],row[1],row[2],row[3],row[4],row[5],row[6],row[7]);
			}
		}
	}
	//释放结果集
	mysql_free_result(result);
	printf("下一页（输入-1退出)");
	int cho;  //输入进来的页码
	printf("请选择:");
	scanf("%d", &cho);
	system("cls");

	selectAll(cho);


	//释放连接
	//mysql_close(sock);
}


//修改数据
void update1()
{
	char name[20];
	printf("请输入要修改薪水的员工名称:");
	scanf("%s", name);
	printf("请输入员工薪水");
	float sal ;
	scanf("%f", &sal);
	char* sql = (char*)malloc(100);
	sprintf(sql, "update emp set sal = %f where ename = '%s'", sal, name);
	if (mysql_query(&mysql, sql) != 0){    //返回值 查询成功是0
		printf("查询失败");
		exit(1);
	}
	else{
		if ((result = mysql_store_result(&mysql)) == NULL){
			printf("成功，影响了%d行",mysql_affected_rows(&mysql));
		}
		else{
			printf("失败");
		}
	}


}

//增加数据功能
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
	printf("请输入要增加的员工编号，姓名，工作职位，上司，雇佣时间，工资，comm，职位编号（职工编号有外键约束，用空格隔开）:\n");
	scanf("%d%s%s%d%s%f%f%d", &empno, ename, job, &mgr, hiredate, &sal, &comm, &deptno);
	char* sql2 = (char*)malloc(100);
	sprintf(sql2, "insert into emp values(%d,'%s','%s',%d,'%s',%f,%f,%d)",empno,ename,job,mgr,hiredate,sal,comm,deptno);

	if (mysql_query(&mysql, sql2) != 0){    //返回值 查询成功是0
		printf("增加失败");
		exit(1);
	}
	else{
		if ((result = mysql_store_result(&mysql)) == NULL){
			printf("成功，影响了%d行\n", mysql_affected_rows(&mysql));
		}
		else{
			printf("失败");
		}
	}
}

//删除数据
void DeleteData(){
	char* sql2 = (char*)malloc(100);
	int DeleEmpno;
	printf("要删除的职工号：");
	scanf("%d", &DeleEmpno);
	query = "delete from emp where empno='%d'";
	sprintf(sql2, query,DeleEmpno);

	if (mysql_query(&mysql, sql2) != 0){    //返回值 查询成功是0
		printf("删除失败");
		exit(1);
	}
	else{
		if ((result = mysql_store_result(&mysql)) == NULL){
			printf("成功，影响了%d行\n", mysql_affected_rows(&mysql));
		}
		else{
			printf("失败");
		}
	}
}

//连接mysql数据库
void connect(){
	//连接之前的初始化
	mysql_init(&mysql);  //取地址
	if ((sock = mysql_real_connect(&mysql, host, user, pass, db, port, win_socket, flag)) == NULL){
		printf("连接失败");
		fprintf(stderr,"%s", mysql_error(&mysql));
		exit(1);
	}
	else{
		mysql_query(&mysql, "set names GBK");    //两个字符码相互转化，读出来没问题，放进里面就没问题
		fprintf(stderr, "连接成功!\n");
	}
}

//功能选择界面

void gongnengxuanze(){
	printf("查看表格功能 请按1\n");
	printf("删除员工功能 请按2\n");
	printf("增加员工功能 请按3\n");
	printf("更新员工数据功能 请按4\n");
	printf("请选择想要应用的功能(0退出)\n");
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