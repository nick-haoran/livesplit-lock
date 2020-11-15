#include<iostream>
#include<cstring>
#include<windows.h>
using namespace std;
int main(){
	string  str = "LiveSplit";
	HWND pWnd = FindWindow(NULL, str.c_str());
	int flag=MessageBox(NULL,"Open Mouse-Penetrate YES/NO", "LiveSplit-Penetrate", MB_YESNO);
	if(flag==6)SetWindowLong(pWnd, GWL_EXSTYLE, WS_EX_TRANSPARENT | WS_EX_LAYERED);
	else SetWindowLong(pWnd, GWL_EXSTYLE, NULL);
}


