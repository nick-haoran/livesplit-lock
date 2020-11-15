#include<iostream>
#include<cstring>
#include<windows.h>
using namespace std;
int main(){
	string  str = "LiveSplit";
	HWND pWnd = FindWindow(NULL, str.c_str());
	SetWindowLong(pWnd, GWL_EXSTYLE, WS_EX_TRANSPARENT | WS_EX_LAYERED);
}



