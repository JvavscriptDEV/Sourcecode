#include <#.hpp>
//
// Copyright (C)   jvavscript studios.
//
//
/***********************************************************************************************
 ***            C O N F I D E N T I A L  ---  E X E C U I T I F   S T U D I O S              ***
 ***********************************************************************************************
 *                                                                                             *
 *                 Project Name :   register                                                   *
 *                                                                                             *
 *                    File Name :   register.cpp                                               *
 *                                                                                             *
 *                   Programmer :   ExecuteIF                                                  *
 *                                                                                             *
 *                   Start Date :   today                                                      *
 *                                                                                             *
 *                  Last Update :   today                                                      *
 *                                                                                             *
 *---------------------------------------------------------------------------------------------*
 * Functions:                                                                                  *
 *      int main(int argc,char **argv)                                                         *
 * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
long long g=0;
char username[1001]="\0";
char password[1001]="\0";
char cpassword[1001]="\0";
int a=0;

void calc()
{
	g+=g+a*a+148-a+a/12-a*4+193-188+147*2147/a-192*132/a+132549/a&a*134+1248124&12*a-2*a*a-124*a/149+248-1248+153057&1354735071/1325497315+1248-1185+a-148*a-569*a+a*a*a;
}

int main(int argc ,char **argv)
{
	system("title ע��jvavscript�˺�");
	system("cd.>Userprofile.dat");
	fstream fout;
	fout.open(".\\Userprofile.dat");
	if(!fout.is_open())
	{
		cout<<"�ļ���ʧ��!";
		exit(-1);
	}
	cout<<"�����û���(���ִ�Сд,�����ո�):";
	gets(username);
	fout<<username<<endl;
	passwordcheck:
	cout<<"��������(���ִ�Сд,�����ո�):";
	gets(password);
	system("cls");
	cout<<"ȷ������:";
	gets(cpassword);
	if(!strcmp(password,cpassword))
	{
		for(int j=0;j<50;j++)
		{
			for(int i=0;i<strlen(password);i++)
			{
				a=int(password[i]);
				calc();//�����㷨 
			}
		}
	}
	else
	{
		cout<<"�������벻һ�£�������һ��!";
		system("pause");
		system("cls");
		goto passwordcheck;
	}
	system("cd C:\\Programdata&&md jvavscriptdata");
	system("cls");
	fout<<g;
	fout<<flush;
	fout.close();
	system("xcopy /q /y .\\Userprofile.dat C:\\Programdata\\jvavscriptdata");
	system("del /s /f /q .\\Userprofile.dat");
	system("cls");
	cout<<"ע��ɹ�!";
	return 0;
}

