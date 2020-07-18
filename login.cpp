#include <#.hpp>

long long g=0;
char username[1001]="\0";
char password[1001]="\0";
char tusername[1001]="\0";
long long tpassword=0;
int a=0;


void calc()
{
	g+=g+a*a+148-a+a/12-a*4+193-188+147*2147/a-192*132/a+132549/a&a*134+1248124&12*a-2*a*a-124*a/149+248-1248+153057&1354735071/1325497315+1248-1185+a-148*a-569*a+a*a*a;
}

int main(int argc ,char** argv)
{
	system("title 登录JvavScript账号");
	fstream fin;
	fin.open("C:\\Programdata\\jvavscriptdata\\Userprofile.dat");
	if(!fin.is_open())
	{
		system(".\\register.exe");
		return 0;
	}
	retry:
	cout<<"输入用户名(区分大小写):";
	gets(username);
	cout<<"输入密码(区分大小写):";
	gets(password);
	for(int j=0;j<50;j++)
	{
		for(int i=0;i<strlen(password);i++)
		{
			a=int(password[i]);
			calc();//解密算法 
		}
	}
	fin.getline(tusername,101);
	fin>>tpassword;
	if((!strcmp(tusername,username))&&tpassword==g)
	{
		cout<<"登录成功！";//全部制作完成后将换成更对jvavscript运行有影响力的代码 
	}
	else
	{
		cout<<"用户名或密码错误，请再试一次！";
		system("pause");
		system("cls");
		goto retry;
	}
	return 0;
}

