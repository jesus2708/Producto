#pragma once  //______________________________________ Producto.h  
#include "Resource.h"
class Producto: public Win::Dialog
{
public:
	Producto()
	{
	}
	~Producto()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Textbox tbxNumero;
	Win::Textbox tbxNumero2;
	Win::Textbox tbxResutado;
	Win::Button btCalcular;
	Win::Label lb1;
	Win::Label lb2;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(16.32479);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(2.22250);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Producto";
		tbxNumero.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 0.87313, 1.34938, 2.85750, 0.68792, hWnd, 1000);
		tbxNumero2.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 5.52979, 1.34938, 2.91042, 0.68792, hWnd, 1001);
		tbxResutado.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 9.49854, 1.34938, 3.91583, 0.68792, hWnd, 1002);
		btCalcular.CreateX(NULL, L"Calcular", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 14.28750, 1.34938, 1.85208, 0.68792, hWnd, 1003);
		lb1.CreateX(NULL, L"X", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 4.28625, 1.34938, 0.71437, 0.68792, hWnd, 1004);
		lb2.CreateX(NULL, L"=", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 8.59896, 1.34938, 0.74083, 0.68792, hWnd, 1005);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		tbxNumero.Font = fontArial009A;
		tbxNumero2.Font = fontArial009A;
		tbxResutado.Font = fontArial009A;
		btCalcular.Font = fontArial009A;
		lb1.Font = fontArial009A;
		lb2.Font = fontArial009A;
	}
	//_________________________________________________
	void btCalcular_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btCalcular.IsEvent(e, BN_CLICKED)) {btCalcular_Click(e); return true;}
		return false;
	}
};
